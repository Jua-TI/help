#include <stdio.h>

int main(void)
{
    float x, quinta_parte;

    // Le um numero real
    scanf("%f", &x);

    // Calcula a quinta parte
    quinta_parte = x / 5.0f;

    // Exibe a saida
    printf("Saida (quinta parte): %.2f\n", quinta_parte);
    return 0;
}
