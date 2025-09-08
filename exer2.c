#include <stdio.h>

int main(void)
{
    float numero;
    printf("Entre com o valor de x\n");
    scanf("%f", &numero);
    if ((numero >= 0 && numero <= 1) || (numero >= 3 && numero <= 5))
    {
        printf("O número está ou entre 0 e 1 ou entre 3 e 5\n");
    }
    else
    {
        printf("O número não está entre 0 e 1 e não está entre 3 e 5\n");
    }
    return 0;
}