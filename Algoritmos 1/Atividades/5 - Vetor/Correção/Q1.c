#include <stdio.h>

int main(void) {
	int v[5];
	int i;

	// Le 5 numeros inteiros
	for (i = 0; i < 5; i++) {
		scanf("%d", &v[i]);
	}

	// Exibe os valores
	for (i = 0; i < 5; i++) {
		printf("Saida: %d\n", v[i]);
	}

	return 0;
}
