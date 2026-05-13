#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
	char string[100];
	float numero, raiz;

	// Le uma string representando um numero
	scanf("%99s", string);

	// Converte a string em numero usando atof()
	numero = atof(string);

	// Calcula a raiz quadrada
	raiz = sqrt(numero);

	// Exibe os resultados
	printf("Saida (numero): %.2f\n", numero);
	printf("Saida (raiz): %.2f\n", raiz);
	return 0;
}
