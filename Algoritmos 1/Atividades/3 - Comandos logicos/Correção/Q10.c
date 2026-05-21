#include <stdio.h>

int main(void) {
	int numero;

	// Le um numero inteiro
	scanf("%d", &numero);

	// Verifica se esta entre 10 e 20 (inclusive)
	if (numero >= 10 && numero <= 20) {
		printf("Saida: Dentro do intervalo\n");
	} else {
		printf("Saida: Fora do intervalo\n");
	}

	return 0;
}
