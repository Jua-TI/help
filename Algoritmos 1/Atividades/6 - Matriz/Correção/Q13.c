#include <stdio.h>

int main(void) {
	int a[3][3];
	int b[3][3];
	int i, j;

	// Le a matriz A
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			scanf("%d", &a[i][j]);
		}
	}

	// Le a matriz B
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			scanf("%d", &b[i][j]);
		}
	}

	// Exibe a soma A + B
	for (i = 0; i < 3; i++) {
		printf("Saida: ");
		for (j = 0; j < 3; j++) {
			if (j > 0) {
				printf(" ");
			}
			printf("%d", a[i][j] + b[i][j]);
		}
		printf("\n");
	}

	return 0;
}
