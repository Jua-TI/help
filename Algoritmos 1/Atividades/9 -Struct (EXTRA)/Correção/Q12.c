#include <stdio.h>

typedef struct {
	char modelo[50];
	double preco;
} Carro;

int main(void) {
	Carro carros[4];
	int i;
	double soma = 0.0;
	double media;
	int acima = 0;

	// Le os carros
	for (i = 0; i < 4; i++) {
		scanf("%49s %lf", carros[i].modelo, &carros[i].preco);
		soma += carros[i].preco;
	}

	media = soma / 4.0;

	// Conta acima da media
	for (i = 0; i < 4; i++) {
		if (carros[i].preco > media) {
			acima++;
		}
	}

	printf("Saida: %.2f\n", media);
	printf("Saida: %d\n", acima);

	return 0;
}
