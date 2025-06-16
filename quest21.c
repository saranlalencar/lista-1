#include <stdio.h>

int main() {
    int num;
    int d1, d2, d3, d4, d5;

    printf("Digite um número de 5 dígitos: ");
    scanf("%d", &num);

    if (num < 10000 || num > 99999) {
        printf("Número inválido! Por favor, insira um número de 5 dígitos.\n");
        return 1;
    }

    d1 = num / 10000;      
    d2 = (num / 1000) % 10;
    d3 = (num / 100) % 10;  
    d4 = (num / 10) % 10;   
    d5 = num % 10;          

    if (d1 == d5 && d2 == d4) {
        printf("O número %d é um palíndromo.\n", num);
    } else {
        printf("O número %d não é um palíndromo.\n", num);
    }

    return 0;
}