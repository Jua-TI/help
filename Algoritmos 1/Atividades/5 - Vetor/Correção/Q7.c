#include <stdio.h>

int main(void) {
	int v[10];
	int i;
	int pares = 0;

	// Le 10 numeros inteiros
	for (i = 0; i < 10; i++) {
		scanf("%d", &v[i]);
		if (v[i] % 2 == 0) {
			pares++;
		}
	}

	// Exibe a quantidade de pares
	printf("Saida: %d\n", pares);

	return 0;
}
