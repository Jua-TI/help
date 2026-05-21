#include <stdio.h>

int main(void) {
	float a, b, c;
	float media_aritmetica, media_ponderada;

	// Le tres numeros reais
	scanf("%f %f %f", &a, &b, &c);

	// Calcula media aritmetica
	media_aritmetica = (a + b + c) / 3.0;

	// Calcula media ponderada (pesos: 2, 3, 5)
	media_ponderada = (a * 2 + b * 3 + c * 5) / 10.0;

	// Exibe a saida
	printf("Saida (media aritmetica): %.2f\n", media_aritmetica);
	printf("Saida (media ponderada): %.2f\n", media_ponderada);
	return 0;
}
