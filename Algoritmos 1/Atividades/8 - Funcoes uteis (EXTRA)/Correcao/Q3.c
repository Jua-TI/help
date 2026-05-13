#include <stdio.h>
#include <math.h>

int main(void) {
	float numero, absoluto;

	// Le um numero real
	scanf("%f", &numero);

	// Calcula o valor absoluto usando fabs()
	absoluto = fabs(numero);

	// Exibe o resultado
	printf("Saida: %.2f\n", absoluto);
	return 0;
}
