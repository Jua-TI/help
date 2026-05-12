#include <stdio.h>

int main(void) {
	float a, b, c;

	// Le tres valores dos lados
	scanf("%f %f %f", &a, &b, &c);

	// Classifica o triangulo
	if (a == b && b == c) {
		printf("Saida: Equilatero\n");
	} else if (a == b || b == c || a == c) {
		printf("Saida: Isosceles\n");
	} else {
		printf("Saida: Escaleno\n");
	}

	return 0;
}
