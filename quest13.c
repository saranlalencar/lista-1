#include <stdio.h>

int main() {
    int A, B, soma = 0, i;

    printf("Digite o valor de A: ");
    scanf("%d", &A);
    printf("Digite o valor de B: ");
    scanf("%d", &B);

    int start = (A < B) ? A : B;  
    int end = (A > B) ? A : B;    

    if (start % 2 != 0) {
        start++;
    }

    for (i = start; i <= end; i += 2) {
        soma += i;
    }

    printf("A soma dos números pares entre %d e %d é: %d\n", start, end, soma);

    return 0;
}