#include <stdio.h>

int main(void) {
	int numero, incrementado, decrementado;

	// Le um numero inteiro
	scanf("%d", &numero);

	// Calcula incremento e decremento
	incrementado = numero + 1;
	decrementado = numero - 2;

	// Exibe a saida
	printf("Saida (original): %d\n", numero);
	printf("Saida (incrementado): %d\n", incrementado);
	printf("Saida (decrementado): %d\n", decrementado);
	return 0;
}
