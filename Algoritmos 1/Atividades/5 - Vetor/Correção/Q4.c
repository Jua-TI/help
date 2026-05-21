#include <stdio.h>

int main(void) {
	double v[10];
	int i;
	double soma = 0.0;
	double media;

	// Le 10 numeros reais
	for (i = 0; i < 10; i++) {
		scanf("%lf", &v[i]);
		soma += v[i];
	}

	media = soma / 10.0;

	// Exibe a media
	printf("Saida: %.2f\n", media);

	return 0;
}
