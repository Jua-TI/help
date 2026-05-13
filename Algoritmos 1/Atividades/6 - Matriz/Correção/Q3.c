#include <stdio.h>

int main(void) {
	double m[4][4];
	int i, j;
	double soma = 0.0;
	double media;

	// Le a matriz 4x4
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			scanf("%lf", &m[i][j]);
			soma += m[i][j];
		}
	}

	media = soma / 16.0;

	// Exibe a media
	printf("Saida: %.2f\n", media);

	return 0;
}
