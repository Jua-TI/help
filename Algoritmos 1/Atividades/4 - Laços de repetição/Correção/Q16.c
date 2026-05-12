#include <stdio.h>

int main(void) {
	int i, j, resultado;

	// Imprime tabuada completa de 1 a 10 usando laços aninhados
	for (i = 1; i <= 10; i++) {
		for (j = 1; j <= 10; j++) {
			resultado = i * j;
			printf("Saida: %d x %d = %d\n", i, j, resultado);
		}
	}

	return 0;
}
