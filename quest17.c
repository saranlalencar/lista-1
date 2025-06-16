#include <stdio.h>

int main() {
    int celsius;
    float fahrenheit;

    for (celsius = 10; celsius <= 100; celsius += 10) {
        
        fahrenheit = (celsius * 9.0 / 5.0) + 32;
        
        printf("%d\t%.2f\n", celsius, fahrenheit);
    }

    return 0;
}