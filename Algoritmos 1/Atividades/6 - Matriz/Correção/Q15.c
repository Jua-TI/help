#include <stdio.h>

int main(void) {
	int a[2][2];
	int b[2][2];
	int c[2][2];
	int i, j, k;

	// Le a matriz A
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			scanf("%d", &a[i][j]);
		}
	}

	// Le a matriz B
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			scanf("%d", &b[i][j]);
		}
	}

	// Calcula o produto C = A * B
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			c[i][j] = 0;
			for (k = 0; k < 2; k++) {
				c[i][j] += a[i][k] * b[k][j];
			}
		}
	}

	// Exibe a matriz produto
	for (i = 0; i < 2; i++) {
		printf("Saida: ");
		for (j = 0; j < 2; j++) {
			if (j > 0) {
				printf(" ");
			}
			printf("%d", c[i][j]);
		}
		printf("\n");
	}

	return 0;
}
