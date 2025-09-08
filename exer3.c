#include <stdio.h>

int main(void){

    int x, y, aux;

    printf("Valor de x\n");
    scanf("%d", &x);
    printf("Valor de y\n");
    scanf("%d", &y);
    if (x < y)
    {
        aux = x;
        x = y;
        y = aux;
    }
    printf("%d %d\n", x, y);

    return 0;
}