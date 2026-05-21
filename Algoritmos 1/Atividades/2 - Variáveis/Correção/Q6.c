#include <stdio.h>

int main(void)
{
    float celsius;
    float fahrenheit;

    // Le temperatura em Celsius
    scanf("%f", &celsius);

    // Converte para Fahrenheit
    fahrenheit = celsius * (9.0f / 5.0f) + 32.0f;

    // Exibe a saida
    printf("Saida (fahrenheit): %.2f\n", fahrenheit);
    return 0;
}
