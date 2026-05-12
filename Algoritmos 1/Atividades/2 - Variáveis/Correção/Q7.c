#include <stdio.h>

int main(void)
{
    float kmh;
    float ms;

    // Le velocidade em km/h
    scanf("%f", &kmh);

    // Converte para m/s
    ms = kmh / 3.6f;

    // Exibe a saida
    printf("Saida (m/s): %.2f\n", ms);
    return 0;
}
