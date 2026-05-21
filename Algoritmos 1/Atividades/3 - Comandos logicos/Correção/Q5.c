#include <stdio.h>

int main(void) {
	float a, b, temp;

	// Le dois numeros reais
	scanf("%f %f", &a, &b);

	// Ordena em ordem crescente
	if (a > b) {
		temp = a;
		a = b;
		b = temp;
	}

	// Exibe a saida
	printf("Saida: %.2f %.2f\n", a, b);
	return 0;
}
