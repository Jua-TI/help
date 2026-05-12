#include <stdio.h>

int main(void)
{
    float graus;
    float radianos;

    // Le angulo em graus
    scanf("%f", &graus);

    // Converte para radianos
    radianos = graus * 3.14f / 180.0f;

    // Exibe a saida
    printf("Saida (radianos): %.2f\n", radianos);
    return 0;
}
