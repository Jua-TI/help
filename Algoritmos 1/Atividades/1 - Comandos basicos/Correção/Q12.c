#include <stdio.h>

int main(void) {
	int numero, quadrado, cubo;

	// Le um numero inteiro
	scanf("%d", &numero);

	// Calcula quadrado e cubo
	quadrado = numero * numero;
	cubo = numero * numero * numero;

	// Exibe a saida
	printf("Saida (quadrado): %d\n", quadrado);
	printf("Saida (cubo): %d\n", cubo);
	return 0;
}
