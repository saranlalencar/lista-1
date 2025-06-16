#include <stdio.h>

int main() {
    float numerador, denominador, resultado;

    printf("Digite o primeiro valor (numerador): ");
    scanf("%f", &numerador);

    do {
        printf("Digite o segundo valor (denominador): ");
        scanf("%f", &denominador);

        if (denominador == 0) {
            printf("Valor invalido! O denominador nao pode ser zero.\n");
        }
    } while (denominador == 0);

    resultado = numerador / denominador;

    printf("Resultado da divisao: %.2f\n", resultado);

    return 0;
}
