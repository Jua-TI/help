#include <stdio.h>
#include <math.h>

int main(void) {
	float numero, log_natural, log_base10;

	// Le um numero real positivo
	scanf("%f", &numero);

	// Calcula logaritmo natural e base 10
	log_natural = log(numero);
	log_base10 = log10(numero);

	// Exibe os resultados
	printf("Saida (log natural): %.4f\n", log_natural);
	printf("Saida (log base 10): %.4f\n", log_base10);
	return 0;
}
