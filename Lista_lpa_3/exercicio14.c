#include <stdio.h>

int main() {
    float num1, num2;

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    if (num1 > num2) {
        printf("O maior e: %.2f\n", num1);
    } else {
        printf("O maior e: %.2f\n", num2);
    }

    return 0;
}