#include <stdio.h>

int main(void) {
	int n, i, soma = 0;

	// Le N
	scanf("%d", &n);

	// Soma todos os numeros de 1 a N
	for (i = 1; i <= n; i++) {
		soma += i;
	}

	// Exibe a saida
	printf("Saida: %d\n", soma);
	return 0;
}
