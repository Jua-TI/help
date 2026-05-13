#include <stdio.h>

int main(void) {
	int m[3][3];
	int i, j;
	int soma = 0;

	// Le a matriz 3x3
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			scanf("%d", &m[i][j]);
			soma += m[i][j];
		}
	}

	// Exibe a soma
	printf("Saida: %d\n", soma);

	return 0;
}
