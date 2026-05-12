#include <stdio.h>

int main(void) {
	int a, b, c, maior;

	// Le tres numeros inteiros
	scanf("%d %d %d", &a, &b, &c);

	// Determina o maior
	if (a > b && a > c) {
		maior = a;
	} else if (b > a && b > c) {
		maior = b;
	} else {
		maior = c;
	}

	// Exibe a saida
	printf("Saida: %d\n", maior);
	return 0;
}
