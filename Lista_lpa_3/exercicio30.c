#include <stdio.h>

int main() {
    float saldo = 1000.0, valor;
    int opcao = 0;

    while (opcao != 4) {
        printf("\n--- CAIXA ELETRONICO ---\n");
        printf("1. Consultar saldo\n");
        printf("2. Depositar\n");
        printf("3. Sacar\n");
        printf("4. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            printf("Saldo atual: R$ %.2f\n", saldo);
        } else if (opcao == 2) {
            printf("Digite o valor para deposito: R$ ");
            scanf("%f", &valor);
            if (valor > 0) {
                saldo += valor;
                printf("Deposito realizado com sucesso!\n");
            } else {
                printf("Valor invalido!\n");
            }
        } else if (opcao == 3) {
            printf("Digite o valor para saque: R$ ");
            scanf("%f", &valor);
            if (valor > 0 && valor <= saldo) {
                saldo -= valor;
                printf("Saque realizado com sucesso!\n");
            } else if (valor > saldo) {
                printf("Saldo insuficiente!\n");
            } else {
                printf("Valor invalido!\n");
            }
        } else if (opcao == 4) {
            printf("Saindo... Obrigado por utilizar o caixa eletrónico!\n");
        } else {
            printf("Opcao invalida! Tente novamente.\n");
        }
    }

    return 0;
}