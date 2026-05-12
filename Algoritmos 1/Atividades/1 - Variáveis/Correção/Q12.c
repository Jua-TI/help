#include <stdio.h>

int main(void)
{
    int n;
    int resultado;

    // Le um numero inteiro
    scanf("%d", &n);

    // Calcula: sucessor do triplo + antecessor do dobro
    resultado = (n * 3 + 1) + (n * 2 - 1);

    // Exibe a saida
    printf("Saida (resultado): %d\n", resultado);
    return 0;
}
