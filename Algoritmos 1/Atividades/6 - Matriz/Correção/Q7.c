#include <stdio.h>

int main(void) {
	int m[3][3];
	int i, j;
	int c;
	int soma = 0;

	// Le a matriz 3x3
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			scanf("%d", &m[i][j]);
		}
	}

	// Le o indice da coluna
	scanf("%d", &c);

	// Soma a coluna C
	for (i = 0; i < 3; i++) {
		soma += m[i][c];
	}

	printf("Saida: %d\n", soma);

	return 0;
}
