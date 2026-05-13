#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int numero, absoluto;

	// Le um numero inteiro
	scanf("%d", &numero);

	// Calcula o valor absoluto usando abs()
	absoluto = abs(numero);

	// Exibe o resultado
	printf("Saida: %d\n", absoluto);
	return 0;
}
