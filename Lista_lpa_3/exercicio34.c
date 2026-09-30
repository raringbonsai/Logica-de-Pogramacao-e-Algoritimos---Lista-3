#include <stdio.h>

int main() {
    char nome[50];
    int quantidade, total_vendas = 0, total_produtos = 0;
    float preco, total_venda, faturamento_total = 0.0, maior_venda = 0.0;
    char continuar;

    do {
        printf("Digite o nome do produto: ");
        scanf(" %[^\n]", nome);

        printf("Digite a quantidade: ");
        scanf("%d", &quantidade);

        printf("Digite o preco unitario: ");
        scanf("%f", &preco);

        total_venda = quantidade * preco;
        printf("Total desta venda: R$ %.2f\n", total_venda);

        total_vendas++;
        total_produtos += quantidade;
        faturamento_total += total_venda;

        if (total_venda > maior_venda) {
            maior_venda = total_venda;
        }

        printf("Deseja registrar outra venda? (S/N): ");
        scanf(" %c", &continuar);

    } while (continuar == 'S' || continuar == 's');

    printf("\n--- RESUMO DE VENDAS ---\n");
    printf("Quantidade de vendas realizadas: %d\n", total_vendas);
    printf("Quantidade total de produtos vendidos: %d\n", total_produtos);
    printf("Faturamento total: R$ %.2f\n", faturamento_total);
    printf("Maior venda realizada: R$ %.2f\n", maior_venda);

    return 0;
}