#include <stdio.h>

typedef struct {
	double largura;
	double altura;
} Retangulo;

int main(void) {
	Retangulo r;
	double area;
	double perimetro;

	// Le largura e altura
	scanf("%lf %lf", &r.largura, &r.altura);

	area = r.largura * r.altura;
	perimetro = 2.0 * (r.largura + r.altura);

	printf("Saida: %.2f\n", area);
	printf("Saida: %.2f\n", perimetro);

	return 0;
}
