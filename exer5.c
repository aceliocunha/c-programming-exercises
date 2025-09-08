#include <stdio.h>

int main(void) {
    double soma = 0.0;
    double termo_atual;

    for (int i = 1; i <= 100; i++) {

        termo_atual = 1.0 / (double)(i * i);
        soma += termo_atual;
        printf("i = %-4d, Termo = %.8e, Soma Parcial = %.8f\n", i, termo_atual, soma);
    }
    printf("Resultado: %.10f\n", soma);

    return 0;
}