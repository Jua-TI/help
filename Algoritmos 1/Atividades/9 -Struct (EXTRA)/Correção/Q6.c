#include <stdio.h>
#include <math.h>

typedef struct {
	double x;
	double y;
} Ponto;

int main(void) {
	Ponto p;
	double dist;

	// Le o ponto
	scanf("%lf %lf", &p.x, &p.y);

	dist = sqrt(p.x * p.x + p.y * p.y);

	printf("Saida: %.2f\n", dist);

	return 0;
}
