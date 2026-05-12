#include <stdio.h>
#include <math.h>

int main(void)
{
    float a, b;
    float hipotenusa;

    // Le os valores dos catetos
    scanf("%f %f", &a, &b);
    
    // Calcula a hipotenusa
    hipotenusa = sqrtf(a * a + b * b);

    // Exibe a saida
    printf("Saida (hipotenusa): %.2f\n", hipotenusa);
    return 0;
}
