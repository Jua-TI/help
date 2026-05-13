#include <stdio.h>
#include <math.h>

int main(void) {
	float x1, y1, x2, y2, distancia;

	// Le as coordenadas de dois pontos
	scanf("%f %f %f %f", &x1, &y1, &x2, &y2);

	// Calcula a distancia euclidiana: sqrt((x2-x1)^2 + (y2-y1)^2)
	distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

	// Exibe o resultado
	printf("Saida: %.2f\n", distancia);
	return 0;
}
