#include <stdio.h>

int main() {
    
    int alturaJose = 150;
    int alturaPedro = 110;

    int crescimentoJose = 2;
    int crescimentoPedro = 3;
    
    int anos = 0;

    while (alturaPedro <= alturaJose) {
        alturaJose += crescimentoJose;  
        alturaPedro += crescimentoPedro;  
        anos++;  
    }
    printf("Pedro sera maior que Jose em %d anos.\n", anos);

    return 0;
}
