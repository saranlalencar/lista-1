#include <stdio.h>

int main() {
    int a, b, c;

    int limite = 500;

    for (a = 1; a <= limite; a++) {
        for (b = a; b <= limite; b++) {
            for (c = b; c <= limite; c++) {
                
                if (a*a + b*b == c*c) {
                    printf("Tripla de Pitágoras: (%d, %d, %d)\n", a, b, c);
                }
            }
        }
    }

    return 0;
}