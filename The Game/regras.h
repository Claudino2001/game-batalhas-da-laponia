void regras(){
	
	printf("Bem vindos ao jogo Batalhas da Lapônia!\n\n");
	printf("---------------------------------------------------------------------------------------------------------------------------------------\n\n");
	printf("INSTRUÇÕES:\n\n");
	printf("1. Haverá um sorteio, para definir quem começará o jogo atacando.\n\n");
	printf("2. O sorteado também deverá escolher seu guerreiro especial. (@ ou #)\n\n");
	printf("3. Após escolher, o tabuleiro irá aparecer na tela.\n\n");
	printf("4. Em seguida, o Player 1 deverá posicionar suas 8 tropas (1 ou 2) e seu especial (@ ou #), e logo após o Player 2 fará o mesmo.\n\n");
	printf("\t4.1. Caso seja digitada uma coordenada inválida, o Player terá que digitar novamente.\n");
	printf("\t4.2. O guerreiro 1 ataca para frente. \n");
	printf("\t4.3. O guerreiro 2 ataca na diagonal, tanto esquerda quanto direita. \n");
	printf("\t4.4. Ambos os guerreiros podem, invés de atacar, se movimentar nas verticais ou horizontais\n");
	printf("\t4.5. As habilidades dos guerreiros especiais serão mostradas na tela após o sorteio.\n");
	printf("\t\t4.5.1. O guerreiro @ tem o poder de erguer uma parede indestrutível.\n\t\t\t\tSó haverá uma parede em campo, você poderá mover essa parede até 4 vezes, uma vez por turno.\n");
	printf("\t\t4.5.2. O guerreiro # tem o poder de adicionar Minas Terrestres.\n\t\t\t\tSua explosão possui um raio de caracter em formato de \"+\".\n");
	printf("\t\t4.5.3. Essas habilidades podem ser usadas uma vez por turno, e até 4 vezes durante toda a partida.\n\n");
	printf("5. Após posicioná-los, quem venceu o sorteio deve escolher um de seus guerreiros e uma ação. (ATACAR ou MOVIMENTAR)\n\n");
	printf("\t5.1. Caso seja escolhido movimentar:  \n");
	printf("\t\t5.1.1. Os guerreiros são limitados à movimentar-se em um raio de 1 por 1, para verticais ou horizontais, respeitando os limites.\n"); 
	printf("\t\t5.1.2. Os guerreiros especiais se movimentam em um raio de 1 caracter em todas as direções e sentidos.\n\n");
	printf("6. O jogo é encerrado quando o campo do seu adversário estiver completamente vazio. \n\n");
	printf("OBS: Para uma melhor experiência, utilize a planilha de coordenadas que acompanha o jogo!\n\n");
	printf("BOA SORTE!\n");
	printf("\n");
	printf("---------------------------------------------------------------------------------------------------------------------------------------\n\n");
	
	system("pause");
	system("cls");
	
}
