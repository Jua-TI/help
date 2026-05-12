#include <stdio.h>

int main(void)
{
    float altura, raio;
    float volume;

    // Le altura e raio do cilindro
    scanf("%f %f", &altura, &raio);

    // Calcula o volume
    volume = 3.141592f * raio * raio * altura;

    // Exibe a saida
    printf("Saida (volume): %.2f\n", volume);
    return 0;
}
