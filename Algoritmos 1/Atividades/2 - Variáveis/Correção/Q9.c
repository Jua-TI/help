#include <stdio.h>

int main(void)
{
    float a, b, c, soma;

    // Le tres numeros reais
    scanf("%f %f %f", &a, &b, &c);

    // Soma os quadrados dos valores lidos
    soma = a * a + b * b + c * c;

    // Exibe a saida
    printf("Saida (soma dos quadrados): %.2f\n", soma);
    return 0;
}
