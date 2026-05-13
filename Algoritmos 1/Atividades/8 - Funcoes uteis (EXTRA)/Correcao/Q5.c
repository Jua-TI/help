#include <stdio.h>
#include <math.h>

int main(void) {
	float numero, arredondado, piso, teto;

	// Le um numero real
	scanf("%f", &numero);

	// Calcula arredondamento, piso e teto
	arredondado = round(numero);
	piso = floor(numero);
	teto = ceil(numero);

	// Exibe os resultados
	printf("Saida (arredondado): %.0f\n", arredondado);
	printf("Saida (piso): %.0f\n", piso);
	printf("Saida (teto): %.0f\n", teto);
	return 0;
}
