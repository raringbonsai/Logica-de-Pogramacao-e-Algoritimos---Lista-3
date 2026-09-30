#include <stdio.h>

int main() {
    char nome[50];
    int quantidade;
    float preco, total;

    printf("Digite o nome do produto: ");
    scanf(" %[^\n]", nome);

    printf("Digite a quantidade comprada: ");
    scanf("%d", &quantidade);

    printf("Digite o preco unitario: ");
    scanf("%f", &preco);

    total = quantidade * preco;

    printf("\nProduto: %s\n", nome);
    printf("Valor total da compra: %.2f\n", total);

    return 0;
}