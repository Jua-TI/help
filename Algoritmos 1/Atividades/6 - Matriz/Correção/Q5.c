#include <stdio.h>

int main(void) {
	int m[3][3];
	int i, j;

	// Le a matriz 3x3
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			scanf("%d", &m[i][j]);
		}
	}

	// Exibe a diagonal secundaria
	for (i = 0; i < 3; i++) {
		printf("Saida: %d\n", m[i][2 - i]);
	}

	return 0;
}
