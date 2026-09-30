#include <stdio.h> 

int main(){
    
    char nome[30];
    
    printf("Insira seu nome: ");
    scanf("%s", &nome);
    
    printf("Olá, %s! Seja bem-vindo(a) à disciplina de Lógica de Programação", &nome);
    
    
    return 0;
}