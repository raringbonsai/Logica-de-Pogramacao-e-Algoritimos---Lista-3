#include <stdio.h>

int main() {
    float num1, num2, num3;

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    printf("Digite o terceiro numero: ");
    scanf("%f", &num3);

    if (num1 >= num2 && num1 >= num3) {
        printf("O maior e: %.2f\n", num1);
    } else if (num2 >= num1 && num2 >= num3) {
        printf("O maior e: %.2f\n", num2);
    } else {
        printf("O maior e: %.2f\n", num3);
    }

    return 0;
}