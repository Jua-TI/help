#include <stdio.h>

int main(void) {
	double v[100];
	int n;
	int i;
	double soma = 0.0;
	double media;
	double maior = 0.0;
	double menor = 0.0;
	int acima = 0;

	// Le N
	scanf("%d", &n);

	// Le N numeros reais e calcula soma, maior e menor
	for (i = 0; i < n; i++) {
		scanf("%lf", &v[i]);
		soma += v[i];
		if (i == 0 || v[i] > maior) {
			maior = v[i];
		}
		if (i == 0 || v[i] < menor) {
			menor = v[i];
		}
	}

	media = soma / n;

	// Conta quantos valores estao acima da media
	for (i = 0; i < n; i++) {
		if (v[i] > media) {
			acima++;
		}
	}

	// Exibe os resultados
	printf("Saida: %.2f\n", soma);
	printf("Saida: %.2f\n", media);
	printf("Saida: %.2f\n", maior);
	printf("Saida: %.2f\n", menor);
	printf("Saida: %d\n", acima);

	return 0;
}
