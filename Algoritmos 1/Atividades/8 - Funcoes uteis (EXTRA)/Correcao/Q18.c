#include <stdio.h>
#include <math.h>

int main(void) {
	float numero, exponencial;

	// Le um numero real
	scanf("%f", &numero);

	// Calcula a exponencial (e^x) usando exp()
	exponencial = exp(numero);

	// Exibe o resultado
	printf("Saida: %.4f\n", exponencial);
	return 0;
}
