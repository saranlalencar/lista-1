#include <stdio.h>

void print_binary(int num) {
    
    for (int i = 7; i >= 0; i--) {
        printf("%d", (num >> i) & 1);  
    }
}

int main() {
    
    printf("Decimal\tBinary\t\tOctal\tHexadecimal\n");
    printf("-------------------------------------------------\n");

    for (int i = 1; i <= 256; i++) {
        printf("%d\t", i);               
        print_binary(i);                 
        printf("\t\t");
        printf("%o\t", i);
        printf("%X\n", i);
    }

    return 0;
}