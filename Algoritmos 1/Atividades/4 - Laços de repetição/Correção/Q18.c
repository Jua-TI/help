#include <stdio.h>

int main(void) {
	int n, original, invertido = 0, digito;

	// Le um numero inteiro
	scanf("%d", &n);

	// Guarda o valor original
	original = n;

	// Inverte o numero
	while (n > 0) {
		digito = n % 10;
		invertido = invertido * 10 + digito;
		n /= 10;
	}

	// Verifica se eh palindromo
	if (original == invertido) {
		printf("Saida: Palindromo\n");
	} else {
		printf("Saida: Nao palindromo\n");
	}

	return 0;
}
