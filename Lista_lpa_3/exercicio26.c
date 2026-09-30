#include <stdio.h>

int main() {
    int qtd_alunos, i;
    float nota, soma_notas = 0.0, media;

    printf("Digite a quantidade de alunos da turma: ");
    scanf("%d", &qtd_alunos);

    for (i = 1; i <= qtd_alunos; i++) {
        printf("Digite a nota do aluno %d: ", i);
        scanf("%f", &nota);
        soma_notas += nota;
    }

    if (qtd_alunos > 0) {
        media = soma_notas / qtd_alunos;
        printf("Media geral da turma: %.2f\n", media);
    } else {
        printf("Quantidade de alunos invalida.\n");
    }

    return 0;
}