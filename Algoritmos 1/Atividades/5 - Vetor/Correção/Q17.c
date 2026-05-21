#include <stdio.h>

int main(void) {
	int v[10];
	int i, j;
	int temp;

	// Le 10 numeros inteiros
	for (i = 0; i < 10; i++) {
		scanf("%d", &v[i]);
	}

	// Ordena em ordem crescente (bubble sort)
	for (i = 0; i < 9; i++) {
		for (j = 0; j < 9 - i; j++) {
			if (v[j] > v[j + 1]) {
				temp = v[j];
				v[j] = v[j + 1];
				v[j + 1] = temp;
			}
		}
	}

	// Exibe o vetor ordenado
	for (i = 0; i < 10; i++) {
		printf("Saida: %d\n", v[i]);
	}

	return 0;
}
