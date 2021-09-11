int selecionar(){
	
	int limX, limXX;
	if (numSorteado1 > numSorteado2){
		limX = 5;
		limXX = 0; 
	}else {
		limX = 11, limXX = 6;	
	}
	
	int resp;
	int n = 1;
	char copo, resposta;
	
	while (n){
		printf ("\nSelecione seu guerreio: ");
		scanf ("%i %i", &gsX, &gsY);
			while(gsX >= limX || gsX <= limXX || (campo_de_batalha[gsX][gsY] == '*' || campo_de_batalha[gsX][gsY] == ' ' || campo_de_batalha[gsX][gsY] == 'x')){
				printf ("Tente novamente. Selecione seu guerreio: ");
				scanf ("%i %i", &gsX, &gsY);
			} 
		
		printf ("Qual sera sua jogada?\nMOVIMENTAR ou ATACAR (M/A)? \n");
		scanf (" %c", &resposta);
		
		if (resposta == 'M' || resposta == 'm'){
			resp = 1;
			n--;
		}		
		if (resposta == 'A' || resposta == 'a'){
			resp = 2;
			n--;
		}
	}
	
return resp;
}

