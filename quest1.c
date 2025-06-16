#include <stdio.h>

int main() {
    int numero;

    while (1) {
        
        printf("Digite um numero de 1 a 7 para um dia da semana (ou 0 para sair): ");
        scanf("%d", &numero);


        if (numero == 0) {
            break;
        }

        if (numero >= 1 && numero <= 7) {
            switch (numero) {
                case 1:
                    printf("Domingo\n");
                    break;
                case 2:
                    printf("Segunda\n");
                    break;
                case 3:
                    printf("Terça\n");
                    break;
                case 4:
                    printf("Quarta\n");
                    break;
                case 5:
                    printf("Quinta\n");
                    break;
                case 6:
                    printf("Sexta\n");
                    break;
                case 7:
                    printf("Sábado\n");
                    break;
            }
        } else {
            
            printf("Numero de dia nao valido\n");
        }
    }

    return 0;
}