
// PLAYER SUPERIOR

void ataque (){
	
	char guerSele = campo_de_batalha[gsX][gsY];
	int i, j, k=0, acertei_a_bomba = 0;
	
	if (guerSele == '1' && gsX < 6){
		for (i=gsX+1; i<11; i++){
			if (campo_de_batalha[i][gsY] == '*' || campo_de_batalha[i][gsY] == 'x' || (campo_de_batalha[i][gsY] == '1' || campo_de_batalha[i][gsY] == '2' || campo_de_batalha[i][gsY] == '#' || campo_de_batalha[i][gsY] == '@' )){
                if (campo_de_batalha[i][gsY] == '*') break;
                if (campo_de_batalha[i][gsY] == 'x'){
                	acertei_a_bomba++;
                	bomba(i, gsY); break;
				}
				k++;
                campo_de_batalha[i][gsY] = ' ';
                printCampo(player1, player2, numSorteado1, numSorteado2); break;
            }
		}
	}
	
	if (guerSele == '2' && gsX < 6){
		int w = gsY;
		int d; //direcao
		char direcao;
		printf ("Direita ou Esquerda (D/E)?\n");
		scanf (" %c", &direcao);
		
		while (direcao != 'D' && direcao != 'd' && direcao != 'E' && direcao != 'e'){
			printf ("Escolha um direcao valida. Direita ou Esquerda (D/E)?\n");
			scanf (" %c", &direcao);
		}
		if (direcao =='d' || direcao == 'D'){
			d = -1;
		}else d=1;
		
		w += d;
		
		for (i=gsX+1; i<11; i++){
			if (campo_de_batalha[i][w] == '*' || campo_de_batalha[i][w] == 'x' || (campo_de_batalha[i][w] == '1' || campo_de_batalha[i][w] == '2' || campo_de_batalha[i][w] == '#' || campo_de_batalha[i][w] == '@' )){
                if (campo_de_batalha[i][w] == '*') break;
                if (campo_de_batalha[i][w] == 'x'){
					acertei_a_bomba++;
					bomba(i, w); break;
				}
				k++;
                campo_de_batalha[i][w] = ' ';
                printCampo(player1, player2, numSorteado1, numSorteado2); break;
            } w += d;
		}
	}

	if (guerSele == '@' && gsX < 6){
	//	printf("AAAAAAAAAA\n");
		int lin, col, x, y;
		printf ("Digite onde deseja colocar a Parede.\n");
		scanf("%i %i", &lin, &col);

		while (!(lin != 5  || lin != 6 || lin > 0 || lin < 11 || col > 0 || col < 11) || campo_de_batalha[lin][col] != ' '){
			printf ("Tente novamente. Digite onde deseja colocar a Parede.\n");
			scanf("%i %i", &lin, &col);	
		}
		if (verificarParede(&x, &y)){
			campo_de_batalha[x][y] = ' ';
		}
	campo_de_batalha[lin][col] = '*';	
	printCampo(player1, player2, numSorteado1, numSorteado2);
	}

	if (guerSele == '#' && gsX < 6){
		if (bombas <= 4){
			int lin, col, x, y;
			printf ("Digite onde deseja colocar a Mina Terrestre.\n");
			scanf("%i %i", &lin, &col);
		
			while (!(lin != 5  || lin != 6 || lin > 0 || lin < 11 || col > 0 || col < 11) || campo_de_batalha[lin][col] != ' '){
				printf ("Tente novamente. Digite onde deseja colocar a Mina Terrestre.\n");
				scanf("%i %i", &lin, &col);	
			}
	campo_de_batalha[lin][col] = 'x';	
	bombas++;
	printCampo(player1, player2, numSorteado1, numSorteado2);
		}
	}
	
	if (k == 0 && acertei_a_bomba == 0){
		printf ("\nAtaque sem efeito no adversario.\n");
		}else if(acertei_a_bomba == 0){
			printf ("\nO seu ataque causou danos ao adiversrio.\n\n");	
	}else{
		printf ("Voce acertou uma bomba!\n");
	}
}

// PLAYER INFERIOR

void ataque2 (){
	
	char guerSele = campo_de_batalha[gsX][gsY];
	int i, j, k=0, acertei_a_bomba = 0;
	
	if (guerSele == '1' && gsX > 6){
		for (i=gsX-1; i>0; i--){
			if (campo_de_batalha[i][gsY] == '*' || campo_de_batalha[i][gsY] == 'x' || (campo_de_batalha[i][gsY] == '1' || campo_de_batalha[i][gsY] == '2' || campo_de_batalha[i][gsY] == '#' || campo_de_batalha[i][gsY] == '@' )){
                if (campo_de_batalha[i][gsY] == '*') break;
                if (campo_de_batalha[i][gsY] == 'x'){
                	acertei_a_bomba++;
                	bomba(i, gsY); break;
				}
				k++;
                campo_de_batalha[i][gsY] = ' ';
                printCampo(player1, player2, numSorteado1, numSorteado2); break;
            }
		}
	}
	
	if (guerSele == '2' && gsX > 6){
		int w = gsY;
		int d; //direcao
		char direcao;
		printf ("Direita ou Esquerda (D/E)?\n");
		scanf (" %c", &direcao);
		
		while (direcao != 'D' && direcao != 'd' && direcao != 'E' && direcao != 'e'){
			printf ("Escolha um direcao valida. Direita ou Esquerda (D/E)?\n");
			scanf (" %c", &direcao);
		}
		if (direcao =='d' || direcao == 'D'){
			d = 1;
		}else d=-1;
		
		w -= d;
		
		for (i=gsX-1; i>0; i--){
			if (campo_de_batalha[i][w] == '*' || campo_de_batalha[i][w] == 'x' || (campo_de_batalha[i][w] == '1' || campo_de_batalha[i][w] == '2' || campo_de_batalha[i][w] == '#' || campo_de_batalha[i][w] == '@' )){
                if (campo_de_batalha[i][w] == '*') break;
                if (campo_de_batalha[i][w] == 'x'){
                	acertei_a_bomba++;
                	bomba(i, w); break;
				}
				k++;
                campo_de_batalha[i][w] = ' ';
                printCampo(player1, player2, numSorteado1, numSorteado2); break;
            } w -= d;
		}
	}

	if (guerSele == '@' && gsX > 6){
		int lin, col, x, y;
		printf ("Digite onde deseja colocar a Parede.\n");
		scanf("%i %i", &lin, &col);

		while (!(lin != 5  || lin != 6 || lin > 0 || lin < 11 || col > 0 || col < 11) || campo_de_batalha[lin][col] != ' '){
			printf ("Tente novamente. Digite onde deseja colocar a Parede.\n");
			scanf("%i %i", &lin, &col);	
		}
		if (verificarParede(&x, &y)){
			campo_de_batalha[x][y] = ' ';
		}
	campo_de_batalha[lin][col] = '*';	
	printCampo(player1, player2, numSorteado1, numSorteado2);
	}

	if (guerSele == '#' && gsX > 6){
		if (bombas <= 4){
			int lin, col, x, y;
			printf ("Digite onde deseja colocar a Mina Terrestre.\n");
			scanf("%i %i", &lin, &col);
		
			while (!(lin != 5  || lin != 6 || lin > 0 || lin < 11 || col > 0 || col < 11) || campo_de_batalha[lin][col] != ' '){
				printf ("Tente novamente. Digite onde deseja colocar a Mina Terrestre.\n");
				scanf("%i %i", &lin, &col);	
			}
	campo_de_batalha[lin][col] = 'x';	
	bombas++;
	printCampo(player1, player2, numSorteado1, numSorteado2);
		}
	}
	
	if (k == 0 && acertei_a_bomba == 0){
		printf ("\nAtaque sem efeito no adversario.\n");
		}else if(acertei_a_bomba == 0){
			printf ("\nO seu ataque causou danos ao adiversrio.\n\n");	
	}else{
		printf ("Voce acertou uma bomba!\n");
	}
}
