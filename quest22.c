#include <stdio.h>

int main() {
    int num, count = 0, digit;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    num = (num < 0) ? -num : num;

    while (num > 0) {
        digit = num % 10;  
        if (digit == 7) {
            count++;
        }
        num /= 10;  
    }

    printf("O número contém %d algarismos 7.\n", count);

    return 0;
}