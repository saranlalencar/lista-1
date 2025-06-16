#include <stdio.h>

int main() {
    int n = 5;
    int resultado;

    printf("Usando pré-incremento:\n");
    resultado = ++n;  
    printf("Valor de n após pré-incremento: %d\n", n);  
    printf("Resultado da expressão: %d\n", resultado);  

    n = 5;

    printf("\nUsando pós-incremento:\n");
    resultado = n++;  
    printf("Valor de n após pós-incremento: %d\n", n);  
    printf("Resultado da expressão: %d\n", resultado);

    return 0;
}