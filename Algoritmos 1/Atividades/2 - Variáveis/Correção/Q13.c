#include <stdio.h>

int main(void)
{
    float raio;
    float area;

    // Le o raio do circulo
    scanf("%f", &raio);
    
    // Calcula a area
    area = 3.141592f * raio * raio;

    // Exibe a saida
    printf("Saida (area): %.2f\n", area);
    return 0;
}
