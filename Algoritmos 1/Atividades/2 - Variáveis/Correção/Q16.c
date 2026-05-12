#include <stdio.h>

int main(void)
{
    float salario;
    float novo_salario;

    // Le o salario atual
    scanf("%f", &salario);

    // Aplica aumento de 25%
    novo_salario = salario * 1.25f;

    // Exibe a saida
    printf("Saida (novo salario): %.2f\n", novo_salario);
    return 0;
}
