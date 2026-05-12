#include <stdio.h>

int main(void) {
	int n, i;
	long fatorial = 1;

	// Le um numero inteiro
	scanf("%d", &n);

	// Calcula o fatorial
	for (i = 1; i <= n; i++) {
		fatorial *= i;
	}

	// Exibe a saida
	printf("Saida: %ld\n", fatorial);
	return 0;
}
