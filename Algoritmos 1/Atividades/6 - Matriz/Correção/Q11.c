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

	// Exibe a transposta
	for (i = 0; i < 3; i++) {
		printf("Saida: ");
		for (j = 0; j < 3; j++) {
			if (j > 0) {
				printf(" ");
			}
			printf("%d", m[j][i]);
		}
		printf("\n");
	}

	return 0;
}
