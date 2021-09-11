/*************************************
*       JOGO BATALHAS DA LAPONIA	 *
*              Jun 2021              *
*          GABRIEL CLAUDINO          *
*          LEONARDO TRINCHÃO         *
* 			PEDRO DA MATTA           *
**************************************/
#include <stdio.h>
#include <stdlib.h>	
#include <time.h>
#include <locale.h>
#include "regras.h"
#include "print_campo_de_batalha.h"
#include "mercacoesPlayer1.h"
#include "selecionar.h"
#include "movimento.h"
#include "ataque.h"

int verificarParede(int *x, int *y){
	int i,j;
	for (i = 1; i<11; i++){
		for (j=1; j<11; j++){
			if(campo_de_batalha[i][j] == '*'){
				*x = i;
				*y = j;
				return 1;
			} 
		}
	}
return 0;
}

void bomba(int x, int y){
	
	campo_de_batalha[x][y] = ' '; 
	
	if (campo_de_batalha[x+1][y] != '*' && campo_de_batalha[x+1][y] != '~'){
		if(campo_de_batalha[x+1][y] == 'x'){
			bomba(x+1, y);
		}else
		campo_de_batalha[x+1][y] = ' ';
	}
	if (campo_de_batalha[x-1][y] != '*' && campo_de_batalha[x-1][y] != '~'){
		if(campo_de_batalha[x-1][y] == 'x'){
			bomba(x-1, y);
		}else
		campo_de_batalha[x-1][y] = ' ';
	}
	if (campo_de_batalha[x][y+1] != '*' && campo_de_batalha[x][y+1] != '~'){
		if(campo_de_batalha[x][y+1] == 'x'){
			bomba(x, y+1);
		}else
		campo_de_batalha[x][y+1] = ' ';
	}
	if (campo_de_batalha[x][y-1] != '*' && campo_de_batalha[x][y-1] != '~'){
		if(campo_de_batalha[x][y-1] == 'x'){
			bomba(x, y-1);
		}else
		campo_de_batalha[x][y-1] = ' ';
	}

	bombas--;	
}

void trocaTurno(){
	if (numSorteado1 == 0) {
		numSorteado1 = 1;
		numSorteado2 = 0;
	}
	else{
		numSorteado1 = 0;
		numSorteado2 = 1;
	} 
}

int theEnd(){
	int i, j, y = 1, b = 1;
	for(i=1; i<5; i++){
		for(j=1; j<11; j++){
			if (campo_de_batalha[i][j] == '*' || campo_de_batalha[i][j] == 'x');
			else if(campo_de_batalha[i][j] != ' '){
				y=0;
			}		
		}
	}
	for(i=7; i<11; i++){
		for(j=1; j<11; j++){
			if (campo_de_batalha[i][j] == '*' || campo_de_batalha[i][j] == 'x');
			else if(campo_de_batalha[i][j] != ' '){
				b=0;
			}
		}
	}
return b == 1 || y == 1 ? 1 : 0;
}

void escolhaEspecial(char *escolhido){
	char caracter;
	printf ("\nLembrando:");
	printf ("\n@: Levanta parede.\n#: Coloca bomba.\n\n");
	printf ("%s, escolha seu guerreiro especial (@ ou #):", escolhido);
	scanf(" %c", &caracter);
	while(caracter != '@' && caracter != '#'){
		printf ("Tente novamente: ");
		scanf(" %c", &caracter);
	}
	if (numSorteado1 > numSorteado2){
		guerreiro1 = caracter;
		guerreiro2 = caracter == '@' ? '#' : '@';
	}else {
		guerreiro2 = caracter;
		guerreiro1 = caracter == '@' ? '#' : '@';
	}
}

int ganhador(){	
int i, j, y = 1, b = 1;
	for(i=1; i<5; i++){
		for(j=1; j<11; j++){
			if (campo_de_batalha[i][j] == '*' || campo_de_batalha[i][j] == 'x');
			else if(campo_de_batalha[i][j] != ' '){
				return 1;
			}		
		}
	}
	for(i=7; i<11; i++){
		for(j=1; j<11; j++){
			if (campo_de_batalha[i][j] == '*' || campo_de_batalha[i][j] == 'x');
			else if(campo_de_batalha[i][j] != ' '){
				return 0;
			}
		}
	}
}

int main (){
	
	setlocale(LC_ALL, "Portuguese");
	regras();
	
	printf ("Player1 digite seu nome: ");
	scanf (" %s", &player1);
	printf ("Player2 digite seu nome: ");
	scanf (" %s", &player2);
	printf ("\n");
	
	srand(time(NULL));
	numSorteado1 = rand() % 100;
	numSorteado2 = rand() % 100;
//	printf ("NUMEROS ALEATORIOS: %d %d\n", numSorteado1, numSorteado2);
	
	if (numSorteado1 > numSorteado2){
		numSorteado1 = 1;
		numSorteado2 = 0;
		printf ("\tO Player %s ira comecar.\n", player1);
	}else{
		numSorteado2 = 1;
		numSorteado1 = 0;
		printf ("\tO Player %s ira comecar.\n", player2);
	}
	
	escolhaEspecial(numSorteado1 > numSorteado2 ? player1 : player2);
	
	printf ("\n");

	printCampo(player1, player2, numSorteado1, numSorteado2);
	
//MARCAÇÃO DO PLAYER 1
	mercacoesPlayer1(player1, player1, player2, 0, 5);
	
//MARCAÇÃO DO PLAYER 2
	mercacoesPlayer1(player2, player1, player2, 6, 11);
	
// SELECIONAR O GUERREIRO & ATACAR OU MOVIMENTAR?
	
	while(1){
		if (numSorteado1 > numSorteado2){
		int r = selecionar();
		if (r == 1){
			movimento();
		}
		if (r == 2){
			ataque();
		}
		trocaTurno();
		printCampo(player1, player2, numSorteado1, numSorteado2);
		}else{
		if (theEnd()) break;
		int r = selecionar();
		if (r == 1){
			movimento();
		}
		if (r == 2){
			ataque2();
		}
		trocaTurno();
		printCampo(player1, player2, numSorteado1, numSorteado2);
		if (theEnd()) break;
		}
	}
	
	int g = ganhador();
	if (g){
		printf ("\nO jogador %s venceu!!\n", player1);
	}else printf ("\nO jogador %s venceu!!\n", player2);
	
	system("pause");
	
return 0;
}