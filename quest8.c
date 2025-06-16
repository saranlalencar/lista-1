#include <stdio.h>

int main() {
    float valor_mercadoria, entrada, prestacao;
    int prestacao_inteira;

    printf("Digite o valor da mercadoria: R$ ");
    scanf("%f", &valor_mercadoria);

    prestacao_inteira = (int)((valor_mercadoria / 3) / 1);  
    prestacao = prestacao_inteira;

    entrada = valor_mercadoria - (prestacao * 2);

    if (entrada < prestacao) {
        prestacao = (int)(valor_mercadoria / 3); 
        entrada = valor_mercadoria - (prestacao * 2); 
    }

    printf("Entrada: R$ %.2f\n", entrada);
    printf("Primeira Prestação: R$ %.2f\n", prestacao);
    printf("Segunda Prestação: R$ %.2f\n", prestacao);

    return 0;
}