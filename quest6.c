#include <stdio.h>

int main() {
    int voto, votos_paulo = 0, votos_renata = 0, votos_brancos = 0, votos_nulos = 0;
    int total_votos = 0;
    float percentual_paulo, percentual_renata, percentual_brancos, percentual_nulos;

    while (1) {
        printf("Digite o numero do candidato (5-Paulo, 7-Renata, 0-Voto em Branco, numero negativo para encerrar): ");
        scanf("%d", &voto);

        if (voto < 0) {
            break;
        }

        printf("Você votou no candidato %d. Confirma? (1-Sim, 0-Não): ", voto);
        int confirmacao;
        scanf("%d", &confirmacao);

        if (confirmacao == 1) {
            if (voto == 5) {
                votos_paulo++;
                total_votos++;
            } else if (voto == 7) {
                votos_renata++;
                total_votos++;
            } else if (voto == 0) {
                votos_brancos++;
                total_votos++;
            } else {
                votos_nulos++;
                total_votos++;
            }
        } else {
            printf("Voto não confirmado.\n");
        }
    }

    if (total_votos > 0) {
        percentual_paulo = (float)votos_paulo / total_votos * 100;
        percentual_renata = (float)votos_renata / total_votos * 100;
        percentual_brancos = (float)votos_brancos / total_votos * 100;
        percentual_nulos = (float)votos_nulos / total_votos * 100;
    } else {
        percentual_paulo = percentual_renata = percentual_brancos = percentual_nulos = 0.0;
    }

    printf("\nRelatório Final da Eleição:\n");
    printf("Votos para Paulo (5): %d (%.2f%%)\n", votos_paulo, percentual_paulo);
    printf("Votos para Renata (7): %d (%.2f%%)\n", votos_renata, percentual_renata);
    printf("Votos em Branco (0): %d (%.2f%%)\n", votos_brancos, percentual_brancos);
    printf("Votos Nulos: %d (%.2f%%)\n", votos_nulos, percentual_nulos);

    if (votos_paulo > votos_renata) {
        printf("Candidato eleito: Paulo\n");
    } else if (votos_renata > votos_paulo) {
        printf("Candidato eleito: Renata\n");
    } else {
        printf("Houve um empate entre os candidatos.\n");
    }

    return 0;
}