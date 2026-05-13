#include <stdio.h>

int main(void) {
	int m[3][3];
	int i, j;
	int simetrica = 1;

	// Le a matriz 3x3
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			scanf("%d", &m[i][j]);
		}
	}

	// Verifica se e simetrica
	for (i = 0; i < 3; i++) {
		for (j = i + 1; j < 3; j++) {
			if (m[i][j] != m[j][i]) {
				simetrica = 0;
				break;
			}
		}
		if (!simetrica) {
			break;
		}
	}

	if (simetrica) {
		printf("Saida: Simetrica\n");
	} else {
		printf("Saida: Nao simetrica\n");
	}

	return 0;
}
