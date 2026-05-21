#include <stdio.h>

int main(void) {
	int n, i;
	float numero, soma = 0, media;

	// Le a quantidade de numeros
	scanf("%d", &n);

	// Le N numeros e soma
	for (i = 0; i < n; i++) {
		scanf("%f", &numero);
		soma += numero;
	}

	// Calcula a media
	media = soma / n;

	// Exibe a saida
	printf("Saida: %.2f\n", media);
	return 0;
}
