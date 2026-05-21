#include <stdio.h>

int main(void) {
	int i, j;

	// Gera e exibe a matriz identidade 4x4
	for (i = 0; i < 4; i++) {
		printf("Saida: ");
		for (j = 0; j < 4; j++) {
			if (j > 0) {
				printf(" ");
			}
			printf("%d", (i == j) ? 1 : 0);
		}
		printf("\n");
	}

	return 0;
}
