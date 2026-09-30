#include <stdio.h>

int main() {
    float num1, num2, resultado;
    char operacao;

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    printf("Digite a operacao (+, -, * ou /): ");
    scanf(" %c", &operacao);

    if (operacao == '+') {
        resultado = num1 + num2;
        printf("Resultado: %.2f\n", resultado);
    } else if (operacao == '-') {
        resultado = num1 - num2;
        printf("Resultado: %.2f\n", resultado);
    } else if (operacao == '*') {
        resultado = num1 * num2;
        printf("Resultado: %.2f\n", resultado);
    } else if (operacao == '/') {
        if (num2 != 0) {
            resultado = num1 / num2;
            printf("Resultado: %.2f\n", resultado);
        } else {
            printf("Erro: Divisao por zero nao permitida!\n");
        }
    } else {
        printf("Operacao invalida!\n");
    }

    return 0;
}