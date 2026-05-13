#include <stdio.h>

int main(void) {
	int v[10];
	int i;
	int impares = 0;

	// Le 10 numeros inteiros
	for (i = 0; i < 10; i++) {
		scanf("%d", &v[i]);
		if (v[i] % 2 != 0) {
			impares++;
		}
	}

	// Exibe a quantidade de impares
	printf("Saida: %d\n", impares);

	return 0;
}
