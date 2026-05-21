#include <stdio.h>

int main(void) {
	int v[10];
	int i;
	int soma = 0;

	// Le 10 numeros inteiros
	for (i = 0; i < 10; i++) {
		scanf("%d", &v[i]);
		soma += v[i];
	}

	// Exibe a soma
	printf("Saida: %d\n", soma);

	return 0;
}
