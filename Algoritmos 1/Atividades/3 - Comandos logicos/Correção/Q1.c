#include <stdio.h>

int main(void) {
	int numero;

	// Le um numero inteiro
	scanf("%d", &numero);

	// Verifica se eh positivo
	if (numero > 0) {
		printf("Saida: Positivo\n");
	} else {
		printf("Saida: Nao positivo\n");
	}

	return 0;
}
