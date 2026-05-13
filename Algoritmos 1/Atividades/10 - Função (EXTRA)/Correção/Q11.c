#include <stdio.h>

static int soma_linha(const int m[3][3], int linha) {
	int j;
	int soma = 0;

	for (j = 0; j < 3; j++) {
		soma += m[linha][j];
	}

	return soma;
}

int main(void) {
	int m[3][3];
	int i, j;

	// Le a matriz 3x3
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			scanf("%d", &m[i][j]);
		}
	}

	for (i = 0; i < 3; i++) {
		printf("Saida: %d\n", soma_linha(m, i));
	}

	return 0;
}
