#include <stdio.h>

int main() {
    int somaDiv3 = 0, somaDiv5 = 0;

    for (int i = 0; i <= 100; i++) {
        if (i % 3 == 0) {
            somaDiv3 += i;
        }
    }

    for (int i = 101; i <= 200; i++) {
        if (i % 5 == 0) {
            somaDiv5 += i;
        }
    }

    printf("Somatório de números divisíveis por 3 no intervalo [0, 100]: %d\n", somaDiv3);
    printf("Somatório de números divisíveis por 5 no intervalo (100, 200]: %d\n", somaDiv5);

    return 0;
}