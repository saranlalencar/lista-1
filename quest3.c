#include <stdio.h>

int main() {
    int F, i;
    unsigned long long fatorial = 1;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &F);

    if (F < 0) {
        printf("Por favor, digite um numero inteiro positivo.\n");
    } else {
        
        for (i = 1; i <= F; i++) {
            fatorial *= i;
        }

        printf("O fatorial de %d é %llu\n", F, fatorial);
    }

    return 0;
}