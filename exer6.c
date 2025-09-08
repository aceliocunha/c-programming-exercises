#include<stdio.h>
#include<stdlib.h>

int main(void){
	int *array;
	int size, i;
	
	printf("Quantos números você deseja inserir ");
	scanf("%d", &size);
	
	array = (int*) malloc(size*sizeof(int));
	
	if (array ==NULL){
		printf("Erro\n");
		return -1;
	}
	for (i = 0; i <size; i++){
		printf("Digite o número %d: ", i + 1);
		scanf("%d", &array[i]);
	}
	printf("Você inseriu: ");
	for (i = 0; i<size; i++){
		printf("%d", array[i]);
	}
	
	free(array);
	
	return 0;
}