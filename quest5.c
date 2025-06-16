#include <stdio.h>
#include <limits.h>  

int main() {
    int n, maior, menor;

    maior = INT_MIN;
    menor = INT_MAX;

    printf("Digite um valor (digite 0 para encerrar): ");
    scanf("%d", &n);

    while (n != 0) {
        if (n > maior) {
            maior = n;
        }
        if (n < menor) {
            menor = n;
        }

        printf("Digite outro valor (digite 0 para encerrar): ");
        scanf("%d", &n);
    }

    if (maior != INT_MIN && menor != INT_MAX) {
        printf("Maior valor: %d\n", maior);
        printf("Menor valor: %d\n", menor);
    } else {
        printf("Nenhum valor foi fornecido.\n");
    }

    return 0;
}
