#include <stdio.h>

int main() {
    int i, n = 20;
    long long fib1 = 1, fib2 = 1, fib3;

    printf("Sequência de Fibonacci até o 20º termo:\n");
    printf("%lld\n", fib1);  
    printf("%lld\n", fib2);  

    for (i = 3; i <= n; i++) {
        fib3 = fib1 + fib2;  
        printf("%lld\n", fib3);
        fib1 = fib2;  
        fib2 = fib3;  
    }

    return 0;
}