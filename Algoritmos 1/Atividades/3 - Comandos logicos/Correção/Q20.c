#include <stdio.h>

int main(void) {
	float base, altura;
	int opcao;
	float resultado;

	// Le base, altura e opcao
	scanf("%f %f %d", &base, &altura, &opcao);

	// Executa a operacao conforme opcao
	switch (opcao) {
		case 1:
			// Area de retangulo
			resultado = base * altura;
			printf("Saida (operacao): Area de Retangulo\n");
			printf("Saida (resultado): %.2f\n", resultado);
			break;

		case 2:
			// Perimetro de retangulo
			resultado = 2 * (base + altura);
			printf("Saida (operacao): Perimetro de Retangulo\n");
			printf("Saida (resultado): %.2f\n", resultado);
			break;

		case 3:
			// Area de triangulo
			resultado = (base * altura) / 2;
			printf("Saida (operacao): Area de Triangulo\n");
			printf("Saida (resultado): %.2f\n", resultado);
			break;

		case 4:
			// Perimetro de triangulo (considerando isosceles)
			resultado = base + 2 * altura;
			printf("Saida (operacao): Perimetro de Triangulo\n");
			printf("Saida (resultado): %.2f\n", resultado);
			break;

		default:
			printf("Saida: Opcao invalida\n");
	}

	return 0;
}
