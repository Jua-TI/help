#include <stdio.h>

int main(void) {
    int n, antecessor, sucessor;

    // Le um numero inteiro
    scanf("%d", &n);

    // Calcula antecessor e sucessor
    antecessor = n - 1;
    sucessor = n + 1;

    // Exibe a saida
    printf("Saida (antecessor): %d\nSaida (sucessor): %d\n", antecessor, sucessor);
    return 0;
}
