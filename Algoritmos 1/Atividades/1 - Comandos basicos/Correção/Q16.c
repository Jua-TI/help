#include <stdio.h>

int main(void) {
	float raio, altura, volume;
	const float PI = 3.14159;

	// Le raio e altura
	scanf("%f %f", &raio, &altura);

	// Calcula o volume do cilindro (V = pi * r^2 * h)
	volume = PI * raio * raio * altura;

	// Exibe a saida
	printf("Saida (volume): %.2f\n", volume);
	return 0;
}
