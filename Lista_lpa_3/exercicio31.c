#include <stdio.h>

int main() {
    float litros, preco_litro, valor_bruto, percentual = 0.0, valor_desconto, valor_final;

    printf("Digite a quantidade de litros abastecidos: ");
    scanf("%f", &litros);

    printf("Digite o preco do litro: ");
    scanf("%f", &preco_litro);

    valor_bruto = litros * preco_litro;

    if (litros < 20.0) {
        percentual = 0.0;
    } else if (litros <= 40.0) {
        percentual = 3.0;
    } else {
        percentual = 5.0;
    }

    valor_desconto = valor_bruto * (percentual / 100.0);
    valor_final = valor_bruto - valor_desconto;

    printf("\nValor bruto: R$ %.2f\n", valor_bruto);
    printf("Desconto: R$ %.2f\n", valor_desconto);
    printf("Valor final: R$ %.2f\n", valor_final);

    return 0;
}