#include <stdio.h>

int main() {
    float raio, area;
    float pi = 3.14159;

    printf("Digite o raio: ");
    scanf("%f", &raio);

    area = pi * raio * raio;

    printf("Area: %.2f\n", area);

    return 0;
}