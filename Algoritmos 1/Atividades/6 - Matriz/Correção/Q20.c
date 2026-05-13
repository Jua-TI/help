#include <stdio.h>

int main(void) {
	double mat[10][10];
	int n, m;
	int i, j;
	double soma = 0.0;
	double media;
	double maior = 0.0;
	double menor = 0.0;
	int acima = 0;

	// Le N e M
	scanf("%d %d", &n, &m);

	// Le a matriz e calcula soma, maior e menor
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			scanf("%lf", &mat[i][j]);
			soma += mat[i][j];
			if (i == 0 && j == 0) {
				maior = mat[i][j];
				menor = mat[i][j];
			} else {
				if (mat[i][j] > maior) {
					maior = mat[i][j];
				}
				if (mat[i][j] < menor) {
					menor = mat[i][j];
				}
			}
		}
	}

	media = soma / (n * m);

	// Conta valores acima da media
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			if (mat[i][j] > media) {
				acima++;
			}
		}
	}

	printf("Saida: %.2f\n", soma);
	printf("Saida: %.2f\n", media);
	printf("Saida: %.2f\n", maior);
	printf("Saida: %.2f\n", menor);
	printf("Saida: %d\n", acima);

	return 0;
}
