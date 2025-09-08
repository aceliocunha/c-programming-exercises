#include<stdio.h>


int main(){

	int escolha;
	
	printf("Escolha sua bebida.\n");
	scanf("%d", &escolha);
	switch(escolha){
		case 1:
			printf("Você escolheu Água.\n");
			break;
		case 2:
			printf("Você escolheu Refrigerante.\n");
			break;
		case 3: 
			printf("Você escolheu Suco.\n");
			break;
		default:
			printf("Opção Invalida.");
	}
	
	return 0;

}