#include <stdio.h>

int main() {
    int n, i, soma = 0;

    printf("Digite um numero inteiro positivo N: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        soma += i;
    }

    printf("Saida: %d\n", soma);

    return 0;
}