#include <stdio.h>

int main() {
    float peso, altura, imc;

    printf("Digite o peso (kg): ");
    scanf("%f", &peso);

    printf("Digite a altura (m): ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("IMC: %.2f\n", imc);

    if (imc < 18.5) {
        printf("Classificacao: Abaixo do peso\n");
    } else if (imc <= 24.9) {
        printf("Classificacao: Peso adequado\n");
    } else if (imc <= 29.9) {
        printf("Classificacao: Sobrepeso\n");
    } else {
        printf("Classificacao: Obesidade\n");
    }

    return 0;
}