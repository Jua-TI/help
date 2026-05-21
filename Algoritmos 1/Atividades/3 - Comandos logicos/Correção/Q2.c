#include <stdio.h>

int main(void) {
	int numero;

	// Le um numero inteiro
	scanf("%d", &numero);

	// Verifica se eh par ou impar usando modulo
	if (numero % 2 == 0) {
		printf("Saida: Par\n");
	} else {
		printf("Saida: Impar\n");
	}

	return 0;
}
