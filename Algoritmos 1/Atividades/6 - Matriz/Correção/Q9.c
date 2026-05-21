#include <stdio.h>

int main(void) {
	int m[4][4];
	int i, j;
	int menor = 0;
	int pos_i = 0;
	int pos_j = 0;

	// Le a matriz 4x4 e encontra o menor
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			scanf("%d", &m[i][j]);
			if (i == 0 && j == 0) {
				menor = m[i][j];
				pos_i = 0;
				pos_j = 0;
			} else if (m[i][j] < menor) {
				menor = m[i][j];
				pos_i = i;
				pos_j = j;
			}
		}
	}

	printf("Saida: %d\n", menor);
	printf("Saida: %d\n", pos_i);
	printf("Saida: %d\n", pos_j);

	return 0;
}
