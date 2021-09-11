void movimento(){
	
	int limX, limXX;
	int linF, colF;
	char guerSele = campo_de_batalha[gsX][gsY];
	int n = 1;
	char copo;
	
	printf ("Escolha para onde move-lo: ");
    scanf ("%i %i", &linF, &colF);
	while(n){
		if ((guerSele == '@' || guerSele == '#') && ((campo_de_batalha[linF][colF] != ' ' && campo_de_batalha[linF][colF] != 'x') || (linF > gsX+1 || colF > gsY+1 || linF < gsX-1 || colF < gsY-1))){
		printf ("Tente novamente. Selecione uma posicao: ");
		scanf ("%i %i", &linF, &colF);
		}else if((guerSele == '@' || guerSele == '#')) n--;
		
		if((guerSele == '1' || guerSele == '2') && ((campo_de_batalha[linF][colF] != ' ' && campo_de_batalha[linF][colF] != 'x' ) || (linF > gsX+1 || colF > gsY+1 || linF < gsX-1 || colF < gsY-1) || ((linF == gsX+1 && colF == gsY-1) || (linF == gsX-1 && colF == gsY-1) || (linF == gsX-1 && colF == gsY+1) || (linF == gsX+1 && colF == gsY+1)) ) ){
			printf ("Tente novamente. Selecione uma posicao: ");
			scanf ("%i %i", &linF, &colF);
		}else if((guerSele == '1' || guerSele == '2')) n--;	
	} 
	
	if (campo_de_batalha[linF][colF] == 'x'){
		bomba(linF, colF);
		bombas--;
	}else{
	    copo = campo_de_batalha[gsX][gsY];
	    campo_de_batalha[gsX][gsY] = ' ';
	    campo_de_batalha[linF][colF] = copo;
	}
}