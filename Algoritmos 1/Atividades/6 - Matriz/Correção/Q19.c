#include <stdio.h>

int main(void) {
	int m[4][4];
	int i, j;
	int soma = 0;

	// Le a matriz 4x4
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			scanf("%d", &m[i][j]);
			if (i > j) {
				soma += m[i][j];
			}
		}
	}

	printf("Saida: %d\n", soma);

	return 0;
}
