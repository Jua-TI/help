#include <stdio.h>

int main(void) {
	float a, b;
	float soma, subtracao, multiplicacao, divisao;

	// Le dois numeros reais
	scanf("%f %f", &a, &b);

	// Calcula as operacoes
	soma = a + b;
	subtracao = a - b;
	multiplicacao = a * b;
	divisao = a / b;

	// Exibe a saida
	printf("Saida (soma): %.2f\n", soma);
	printf("Saida (subtracao): %.2f\n", subtracao);
	printf("Saida (multiplicacao): %.2f\n", multiplicacao);
	printf("Saida (divisao): %.2f\n", divisao);
	return 0;
}
