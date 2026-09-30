#include <stdio.h>

int main() {
    float horas, valor_hora, salario;

    printf("Digite a quantidade de horas trabalhadas: ");
    scanf("%f", &horas);

    printf("Digite o valor recebido por hora: ");
    scanf("%f", &valor_hora);

    salario = horas * valor_hora;

    printf("Salario bruto: %.2f\n", salario);

    return 0;
}