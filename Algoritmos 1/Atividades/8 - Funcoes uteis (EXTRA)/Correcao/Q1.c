#include <stdio.h>
#include <math.h>

int main(void) {
	float numero, raiz;

	// Le um numero real positivo
	scanf("%f", &numero);

	// Calcula a raiz quadrada usando sqrt()
	raiz = sqrt(numero);

	// Exibe o resultado
	printf("Saida: %.2f\n", raiz);
	return 0;
}
