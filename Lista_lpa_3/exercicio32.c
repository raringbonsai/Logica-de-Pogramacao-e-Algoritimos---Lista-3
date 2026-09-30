#include <stdio.h>

int main() {
    int hora_entrada, hora_saida, tempo_permanencia;
    float valor_total;

    printf("Digite a hora de entrada (0 a 23): ");
    scanf("%d", &hora_entrada);

    printf("Digite a hora de saída (0 a 23): ");
    scanf("%d", &hora_saida);

    if (hora_saida >= hora_entrada) {
        tempo_permanencia = hora_saida - hora_entrada;
    } else {
        tempo_permanencia = (24 - hora_entrada) + hora_saida;
    }

    if (tempo_permanencia == 0) {
        valor_total = 0.0;
    } else {
        valor_total = 10.0 + (tempo_permanencia - 1) * 5.0;
    }

    printf("\nTempo de permanencia: %d hora(s)\n", tempo_permanencia);
    printf("Valor total: R$ %.2f\n", valor_total);

    return 0;
}