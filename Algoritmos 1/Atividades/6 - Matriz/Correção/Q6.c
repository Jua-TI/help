#include <stdio.h>

int main(void) {
	int m[3][3];
	int i, j;
	int l;
	int soma = 0;

	// Le a matriz 3x3
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			scanf("%d", &m[i][j]);
		}
	}

	// Le o indice da linha
	scanf("%d", &l);

	// Soma a linha L
	for (j = 0; j < 3; j++) {
		soma += m[l][j];
	}

	printf("Saida: %d\n", soma);

	return 0;
}
