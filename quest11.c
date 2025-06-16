#include <stdio.h>

int main() {
    int A, B, i;

    printf("Digite o valor de A: ");
    scanf("%d", &A);
    printf("Digite o valor de B: ");
    scanf("%d", &B);

    int start = (A < B) ? A : B;  
    int end = (A > B) ? A : B;    

    printf("Quadrados dos múltiplos de 4 entre %d e %d:\n", start, end);

    for (i = start; i <= end; i++) {
        if (i % 4 == 0) {  
            printf("O quadrado de %d é %d\n", i, i * i);  
        }
    }

    return 0;
}