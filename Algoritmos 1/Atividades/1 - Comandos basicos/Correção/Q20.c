#include <stdio.h>

int main(void) {
	float valor_inicial, taxa_juros, periodo;
	float montante;

	// Le valor inicial, taxa de juros e periodo em meses
	scanf("%f %f %f", &valor_inicial, &taxa_juros, &periodo);

	// Calcula o montante usando juros simples (M = V * (1 + i * t / 100))
	montante = valor_inicial * (1 + taxa_juros * periodo / 100);

	// Exibe a saida de forma formatada e descritiva
	printf("========== CALCULO DE JUROS SIMPLES ==========\n");
	printf("Saida (valor inicial): R$ %.2f\n", valor_inicial);
	printf("Saida (taxa de juros): %.2f%%\n", taxa_juros);
	printf("Saida (periodo em meses): %.0f\n", periodo);
	printf("Saida (montante final): R$ %.2f\n", montante);
	printf("=============================================\n");
	return 0;
}
