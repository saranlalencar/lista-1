#include <stdio.h>
#include <math.h>  

int main() {
    long long somatorio = 0;
    
    for (int i = 0; i < 64; i++) {
        somatorio += pow(2, i);  
    }

    printf("O somatório de grãos de trigo no tabuleiro de xadrez é: %lld\n", somatorio);

    return 0;
}