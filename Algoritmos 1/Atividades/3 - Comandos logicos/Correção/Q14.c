#include <stdio.h>

int main(void) {
	int a, b, c;

	// Le tres numeros inteiros
	scanf("%d %d %d", &a, &b, &c);

	// Verifica se A > B E B > C (crescente)
	if (a > b && b > c) {
		printf("Saida: Crescente\n");
	} else {
		printf("Saida: Nao crescente\n");
	}

	return 0;
}
