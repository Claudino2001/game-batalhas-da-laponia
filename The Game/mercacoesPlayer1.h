void mercacoesPlayer1(char *player, char *player1, char *player2, int x, int y){
	
	int lin, col, n = 9;
	char guerreiro;
	
	printf ("\n%s o seu campo eh o %s.\n", player, x == 0 ? "superior" : "inferior" );
	
	printf ("Agora chegou o momento de posicionar os seus guerreiros!\n");
	
	while (n){

		if (n > 1){
			printf("Digite as coordenadas: \n");
		}else{
			printf ("Por fim, digite as coordenadas do seu guerrerio especial: \n");
		}
		scanf("%i %i", &lin, &col);

		if (!(lin <= x || lin >= y || col == 0 || col == 11 ) && campo_de_batalha[lin][col]==' '){
			if (n > 1){
				printf("Agora escolha o seu guerreiro (1 ou 2): ");
				scanf(" %c", &guerreiro);
					while (guerreiro != '1' && guerreiro != '2'){
						printf ("Eh 1 ou 2. Digite novamente: ");
						scanf(" %c", &guerreiro);
					}
				campo_de_batalha[lin][col]=guerreiro;
				n--;	
			}else{
				campo_de_batalha[lin][col] = x == 0 ? guerreiro1 : guerreiro2;
				n--;
			}
		}
		printCampo(player1, player2, numSorteado1, numSorteado2);
	}
	printCampo(player1, player2, numSorteado1, numSorteado2);	
}
