#include <stdio.h>

int main(void) {
	int n, i, binario[32];
	int indice = 0;

	// Le um numero inteiro em base decimal
	scanf("%d", &n);

	// Converte para binario
	while (n > 0) {
		binario[indice] = n % 2;
		n /= 2;
		indice++;
	}

	// Imprime em ordem inversa
	printf("Saida: ");
	for (i = indice - 1; i >= 0; i--) {
		printf("%d", binario[i]);
	}
	printf("\n");

	return 0;
}
