#include <stdio.h>

int main (){
    
    int n1, n2, n3;
    
    printf("digite o primeiro numero: ");
    scanf("%i", &n1);
    
    printf("digite o segundo numemro: ");
    scanf("%i", &n2);
    
    n3 = n1 + n2;
    
    printf("o resultado da soma é: %i", n3);
    
    return 0;
}