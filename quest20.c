#include <stdio.h>

long long fatorial(int n) {
    long long resultado = 1;
    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

int main() {
    
    for (int i = 1; i <= 10; i += 2) {
        
        long long resultado = fatorial(i);
        
        printf("O fatorial de %d é: %lld\n", i, resultado);
    }

    return 0;
}