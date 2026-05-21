#include <stdio.h>

int main(void) {
	int a, b, maior;

	// Le dois numeros inteiros
	scanf("%d %d", &a, &b);

	// Determina o maior
	if (a > b) {
		maior = a;
	} else {
		maior = b;
	}

	// Exibe a saida
	printf("Saida: %d\n", maior);
	return 0;
}
