#include <stdio.h>

int main(void) {
	float raio, perimetro, area;
	const float PI = 3.14159;

	// Le o raio do circulo
	scanf("%f", &raio);

	// Calcula perimetro (P = 2 * pi * r) e area (A = pi * r^2)
	perimetro = 2 * PI * raio;
	area = PI * raio * raio;

	// Exibe a saida
	printf("Saida (perimetro): %.2f\n", perimetro);
	printf("Saida (area): %.2f\n", area);
	return 0;
}
