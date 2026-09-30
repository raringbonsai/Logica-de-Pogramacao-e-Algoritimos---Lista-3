#include <stdio.h>

int main() {
    int qtd_alunos, i;
    int aprovados = 0, recuperacao = 0, reprovados = 0;
    char nome[50];
    float n1, n2, media, soma_medias = 0.0;
    float maior_media = 0.0, menor_media = 10.0;

    printf("Digite a quantidade de alunos: ");
    scanf("%d", &qtd_alunos);

    for (i = 1; i <= qtd_alunos; i++) {
        printf("\n--- Aluno %d ---\n", i);
        printf("Digite o nome do aluno: ");
        scanf(" %[^\n]", nome);

        printf("Digite a nota da primeira avaliacao: ");
        scanf("%f", &n1);

        printf("Digite a nota da segunda avaliacao: ");
        scanf("%f", &n2);

        media = (n1 + n2) / 2.0;
        soma_medias += media;

        printf("Media de %s: %.2f\n", nome, media);

        if (media >= 7.0) {
            printf("Situacao: Aprovado\n");
            aprovados++;
        } else if (media >= 5.0) {
            printf("Situacao: Recuperacao\n");
            recuperacao++;
        } else {
            printf("Situacao: Reprovado\n");
            reprovados++;
        }

        if (i == 1) {
            maior_media = media;
            menor_media = media;
        } else {
            if (media > maior_media) {
                maior_media = media;
            }
            if (media < menor_media) {
                menor_media = media;
            }
        }
    }

    printf("\n--- RESUMO DA TURMA ---\n");
    printf("Quantidade de alunos: %d\n", qtd_alunos);
    printf("Quantidade de aprovados: %d\n", aprovados);
    printf("Quantidade em recuperacao: %d\n", recuperacao);
    printf("Quantidade de reprovados: %d\n", reprovados);

    if (qtd_alunos > 0) {
        printf("Media geral da turma: %.2f\n", soma_medias / qtd_alunos);
        printf("Maior media: %.2f\n", maior_media);
        printf("Menor media: %.2f\n", menor_media);
    }

    return 0;
}