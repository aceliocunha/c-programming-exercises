#include <stdio.h>


int main(void){

	float x, y;
	printf("Entre com o valor de x\n");
	scanf("%f", &x);
	printf("Entre com o valor y\n");
	scanf("%f", &y);
	if (x >= y)
		printf("x é maior ou igual a y\n");
	else
	printf("x menor que y\n");
	return 0;
}