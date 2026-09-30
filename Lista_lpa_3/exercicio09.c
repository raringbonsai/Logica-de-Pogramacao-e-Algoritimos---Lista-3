#include <stdio.h>

int main() {
    float distancia, combustivel, consumo;

    printf("Digite a distancia percorrida (km): ");
    scanf("%f", &distancia);

    printf("Digite a quantidade de combustivel utilizada (litros): ");
    scanf("%f", &combustivel);

    if (combustivel != 0) {
        consumo = distancia / combustivel;
        printf("Consumo medio: %.2f km/L\n", consumo);
    } else {
        printf("Quantidade de combustivel deve ser maior que zero.\n");
    }

    return 0;
}