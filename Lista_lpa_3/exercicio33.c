#include <stdio.h>

int main() {
    int voto, c1 = 0, c2 = 0, c3 = 0, total_votos = 0;

    printf("Votacao (1, 2 ou 3 | Digite 0 para encerrar):\n");

    do {
        printf("Digite o seu voto: ");
        scanf("%d", &voto);

        if (voto == 1) {
            c1++;
            total_votos++;
        } else if (voto == 2) {
            c2++;
            total_votos++;
        } else if (voto == 3) {
            c3++;
            total_votos++;
        } else if (voto != 0) {
            printf("Voto invalido! Tente novamente.\n");
        }
    } while (voto != 0);

    printf("\n--- RESULTADO DA ELEICAO ---\n");
    printf("Votos Candidato 1: %d\n", c1);
    printf("Votos Candidato 2: %d\n", c2);
    printf("Votos Candidato 3: %d\n", c3);
    printf("Total de votos: %d\n", total_votos);

    if (c1 > c2 && c1 > c3) {
        printf("Candidato vencedor: Candidato 1\n");
    } else if (c2 > c1 && c2 > c3) {
        printf("Candidato vencedor: Candidato 2\n");
    } else if (c3 > c1 && c3 > c2) {
        printf("Candidato vencedor: Candidato 3\n");
    } else if (total_votos == 0) {
        printf("Nenhum voto foi registrado.\n");
    } else {
        printf("Empate entre candidatos!\n");
    }

    return 0;
}