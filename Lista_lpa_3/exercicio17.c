#include <stdio.h>

int main() {
    float valor_original, percentual = 0.0, valor_desconto, valor_final;

    printf("Digite o valor da compra: ");
    scanf("%f", &valor_original);

    if (valor_original <= 100.0) {
        percentual = 0.0;
    } else if (valor_original <= 500.0) {
        percentual = 5.0;
    } else {
        percentual = 10.0;
    }

    valor_desconto = valor_original * (percentual / 100.0);
    valor_final = valor_original - valor_desconto;

    printf("\nValor original: R$ %.2f\n", valor_original);
    printf("Percentual de desconto: %.0f%%\n", percentual);
    printf("Valor do desconto: R$ %.2f\n", valor_desconto);
    printf("Valor final: R$ %.2f\n", valor_final);

    return 0;
}