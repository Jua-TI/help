#include <stdio.h>

static void ler_vetor(double v[], int n) {
	int i;
	for (i = 0; i < n; i++) {
		scanf("%lf", &v[i]);
	}
}

static double media_vetor(const double v[], int n) {
	double soma = 0.0;
	int i;

	for (i = 0; i < n; i++) {
		soma += v[i];
	}

	return soma / n;
}

static int acima_media(const double v[], int n, double media) {
	int i;
	int cont = 0;

	for (i = 0; i < n; i++) {
		if (v[i] > media) {
			cont++;
		}
	}

	return cont;
}

int main(void) {
	double v[20];
	int n;
	double media;
	int cont;

	// Le N
	scanf("%d", &n);

	// Le o vetor
	ler_vetor(v, n);

	media = media_vetor(v, n);
	cont = acima_media(v, n, media);

	printf("Saida: %.2f\n", media);
	printf("Saida: %d\n", cont);

	return 0;
}
