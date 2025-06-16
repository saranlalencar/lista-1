#include <stdio.h>

int main() {
    int A, B;
    int soma = 0;
    int quantidade = 0;
    float media;

    printf("Digite o valor de A (limite inferior): ");
    scanf("%d", &A);
    printf("Digite o valor de B (limite superior): ");
    scanf("%d", &B);

    if (A > B) {
        
        int temp = A;
        A = B;
        B = temp;
    }

    for (int i = A; i <= B; i++) {
        soma += i;  
        quantidade++;  
    }

    if (quantidade > 0) {
        media = (float) soma / quantidade;
        
        printf("A média aritmética dos números entre %d e %d é: %.2f\n", A, B, media);
    } else {
        printf("Faixa inválida.\n");
    }

    return 0;
}