void regras(){
	
	printf("Bem vindos ao jogo Batalhas da Lap�nia!\n\n");
	printf("---------------------------------------------------------------------------------------------------------------------------------------\n\n");
	printf("INSTRU��ES:\n\n");
	printf("1. Haver� um sorteio, para definir quem come�ar� o jogo atacando.\n\n");
	printf("2. O sorteado tamb�m dever� escolher seu guerreiro especial. (@ ou #)\n\n");
	printf("3. Ap�s escolher, o tabuleiro ir� aparecer na tela.\n\n");
	printf("4. Em seguida, o Player 1 dever� posicionar suas 8 tropas (1 ou 2) e seu especial (@ ou #), e logo ap�s o Player 2 far� o mesmo.\n\n");
	printf("\t4.1. Caso seja digitada uma coordenada inv�lida, o Player ter� que digitar novamente.\n");
	printf("\t4.2. O guerreiro 1 ataca para frente. \n");
	printf("\t4.3. O guerreiro 2 ataca na diagonal, tanto esquerda quanto direita. \n");
	printf("\t4.4. Ambos os guerreiros podem, inv�s de atacar, se movimentar nas verticais ou horizontais\n");
	printf("\t4.5. As habilidades dos guerreiros especiais ser�o mostradas na tela ap�s o sorteio.\n");
	printf("\t\t4.5.1. O guerreiro @ tem o poder de erguer uma parede indestrut�vel.\n\t\t\t\tS� haver� uma parede em campo, voc� poder� mover essa parede at� 4 vezes, uma vez por turno.\n");
	printf("\t\t4.5.2. O guerreiro # tem o poder de adicionar Minas Terrestres.\n\t\t\t\tSua explos�o possui um raio de caracter em formato de \"+\".\n");
	printf("\t\t4.5.3. Essas habilidades podem ser usadas uma vez por turno, e at� 4 vezes durante toda a partida.\n\n");
	printf("5. Ap�s posicion�-los, quem venceu o sorteio deve escolher um de seus guerreiros e uma a��o. (ATACAR ou MOVIMENTAR)\n\n");
	printf("\t5.1. Caso seja escolhido movimentar:  \n");
	printf("\t\t5.1.1. Os guerreiros s�o limitados � movimentar-se em um raio de 1 por 1, para verticais ou horizontais, respeitando os limites.\n"); 
	printf("\t\t5.1.2. Os guerreiros especiais se movimentam em um raio de 1 caracter em todas as dire��es e sentidos.\n\n");
	printf("6. O jogo � encerrado quando o campo do seu advers�rio estiver completamente vazio. \n\n");
	printf("OBS: Para uma melhor experi�ncia, utilize a planilha de coordenadas que acompanha o jogo!\n\n");
	printf("BOA SORTE!\n");
	printf("\n");
	printf("---------------------------------------------------------------------------------------------------------------------------------------\n\n");
	
	system("pause");
	system("cls");
	
}
