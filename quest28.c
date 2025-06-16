#include <stdio.h>

int main() {
    unsigned char X, Y;
    
    printf("Digite o valor de X (0-255): ");
    scanf("%hhu", &X);  
    
    printf("Digite o valor de Y (0-255): ");
    scanf("%hhu", &Y);

    Y = Y & 0xF0;

    Y = Y | (X & 0x0F);

    printf("Resultado final de Y (após esconder os bits de X): %hhu\n", Y);

    return 0;
}