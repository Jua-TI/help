#include <stdio.h>

int main(void) {
	int a, b;

	// Le dois numeros inteiros
	scanf("%d %d", &a, &b);

	// Verifica se A eh multiplo de B
	if (a % b == 0) {
		printf("Saida: Multiplo\n");
	} else {
		printf("Saida: Nao multiplo\n");
	}

	return 0;
}
