#include <stdio.h>
#include <math.h>

int main(void) {
	float angulo_graus, angulo_radianos;
	float seno, cosseno, tangente;

	// Le um angulo em graus
	scanf("%f", &angulo_graus);

	// Converte para radianos
	angulo_radianos = angulo_graus * M_PI / 180.0;

	// Calcula seno, cosseno e tangente
	seno = sin(angulo_radianos);
	cosseno = cos(angulo_radianos);
	tangente = tan(angulo_radianos);

	// Exibe os resultados
	printf("Saida (seno): %.4f\n", seno);
	printf("Saida (cosseno): %.4f\n", cosseno);
	printf("Saida (tangente): %.4f\n", tangente);
	return 0;
}
