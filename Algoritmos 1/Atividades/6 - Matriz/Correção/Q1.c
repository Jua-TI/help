#include <stdio.h>

int main(void) {
	int m[2][2];
	int i, j;

	// Le a matriz 2x2
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			scanf("%d", &m[i][j]);
		}
	}

	// Exibe a matriz
	for (i = 0; i < 2; i++) {
		printf("Saida: ");
		for (j = 0; j < 2; j++) {
			if (j > 0) {
				printf(" ");
			}
			printf("%d", m[i][j]);
		}
		printf("\n");
	}

	return 0;
}
