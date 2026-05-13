#include <stdio.h>

static void transposta(const int m[3][3], int t[3][3]) {
	int i, j;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			t[i][j] = m[j][i];
		}
	}
}

int main(void) {
	int m[3][3];
	int t[3][3];
	int i, j;

	// Le a matriz 3x3
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			scanf("%d", &m[i][j]);
		}
	}

	transposta(m, t);

	for (i = 0; i < 3; i++) {
		printf("Saida: ");
		for (j = 0; j < 3; j++) {
			if (j > 0) {
				printf(" ");
			}
			printf("%d", t[i][j]);
		}
		printf("\n");
	}

	return 0;
}
