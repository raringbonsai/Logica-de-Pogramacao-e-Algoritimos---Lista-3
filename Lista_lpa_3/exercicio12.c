#include <stdio.h>

int main() {
    float numero;

    printf("Digite um numero: ");
    scanf("%f", &numero);

    if (numero > 0) {
        printf("positivo\n");
    } else if (numero < 0) {
        printf("negativo\n");
    } else {
        printf("zero\n");
    }

    return 0;
}