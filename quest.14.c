#include <stdio.h>
#include <math.h>  

int main() {
    int base = 3;

    printf("Potências de 3 de 3^0 até 3^7:\n");

    for (int expoente = 0; expoente <= 7; expoente++) {
        long resultado = pow(base, expoente);  
        printf("3^%d = %ld\n", expoente, resultado);  
    }

    return 0;
}