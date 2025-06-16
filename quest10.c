#include <stdio.h>

int main() {
    int i;

    printf("Quadrados dos múltiplos de 4 entre 15 e 90:\n");

    for (i = 15; i <= 90; i++) {
        if (i % 4 == 0) {  
            printf("O quadrado de %d é %d\n", i, i * i);  
        }
    }

    return 0;
}