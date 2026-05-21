#include <stdio.h>

int main(void) {
	float a, b, c;

	// Le tres valores dos lados
	scanf("%f %f %f", &a, &b, &c);

	// Valida o triangulo
	if ((a + b > c) && (a + c > b) && (b + c > a)) {
		printf("Saida: Valido\n");
	} else {
		printf("Saida: Invalido\n");
	}

	return 0;
}
