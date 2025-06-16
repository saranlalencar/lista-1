#include <stdio.h>

int main() {
    int numero;
    int maior, menor;
    int primeiro = 1;  

    while (1) {
        printf("Digite um numero inteiro: ");
        scanf("%d", &numero);

        if (numero < 0 && numero % 2 == 0) {
            break;
        }

        if (primeiro) {
            maior = numero;
            menor = numero;
            primeiro = 0;
        } else {
            
            if (numero > maior) {
                maior = numero;
            }
            if (numero < menor) {
                menor = numero;
            }
        }
    }

    printf("Produto do maior (%d) pelo menor (%d) e: %d\n", maior, menor, maior * menor);

    return 0;
}