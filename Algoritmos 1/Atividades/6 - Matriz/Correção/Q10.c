#include <stdio.h>

int main(void) {
	int m[3][3];
	int i, j;
	int pares = 0;

	// Le a matriz 3x3
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			scanf("%d", &m[i][j]);
			if (m[i][j] % 2 == 0) {
				pares++;
			}
		}
	}

	printf("Saida: %d\n", pares);

	return 0;
}
