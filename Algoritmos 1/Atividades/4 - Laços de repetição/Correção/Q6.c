#include <stdio.h>

int main(void) {
	int n, i, resultado;

	// Le um numero inteiro
	scanf("%d", &n);

	// Imprime a tabuada de N
	for (i = 1; i <= 10; i++) {
		resultado = n * i;
		printf("Saida: %d x %d = %d\n", n, i, resultado);
	}

	return 0;
}
