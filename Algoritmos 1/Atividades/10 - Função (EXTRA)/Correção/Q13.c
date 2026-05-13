#include <stdio.h>

// Multiplica duas matrizes 2x2.
void multiplica_2x2(const int a[2][2], const int b[2][2], int c[2][2]) {
	int i, j, k;
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			c[i][j] = 0;
			for (k = 0; k < 2; k++) {
				c[i][j] += a[i][k] * b[k][j];
			}
		}
	}
}

int main(void) {
	int a[2][2];
	int b[2][2];
	int c[2][2];
	int i, j;

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

	multiplica_2x2(a, b, c);

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
