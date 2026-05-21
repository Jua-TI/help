#include <stdio.h>

int main(void) {
	int v[10];
	int i;

	// Le 10 numeros inteiros
	for (i = 0; i < 10; i++) {
		scanf("%d", &v[i]);
	}

	// Substitui negativos por zero e exibe
	for (i = 0; i < 10; i++) {
		if (v[i] < 0) {
			v[i] = 0;
		}
		printf("Saida: %d\n", v[i]);
	}

	return 0;
}
