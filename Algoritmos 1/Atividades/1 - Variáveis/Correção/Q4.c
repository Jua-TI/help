#include <stdio.h>

int main(void) {
	float x, quadrado;

	// Le um numero real
	scanf("%f", &x);
	// Calcula o quadrado
    quadrado = x * x;

	// Exibe a saida
	printf("Saida (quadrado): %.2f\n", quadrado);
	return 0;
}
