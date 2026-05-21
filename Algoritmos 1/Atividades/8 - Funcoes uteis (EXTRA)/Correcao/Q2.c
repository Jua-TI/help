#include <stdio.h>
#include <math.h>

int main(void) {
	float base, expoente, resultado;

	// Le base e expoente
	scanf("%f %f", &base, &expoente);

	// Calcula a potencia usando pow()
	resultado = pow(base, expoente);

	// Exibe o resultado
	printf("Saida: %.2f\n", resultado);
	return 0;
}
