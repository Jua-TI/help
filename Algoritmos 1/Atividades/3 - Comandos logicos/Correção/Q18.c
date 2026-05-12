#include <stdio.h>

int main(void) {
	int quantidade;
	float valor_unitario, total, desconto_perc, valor_desconto, total_desconto;

	// Le quantidade e valor unitario
	scanf("%d %f", &quantidade, &valor_unitario);

	// Calcula total
	total = quantidade * valor_unitario;

	// Aplica desconto progressivo
	if (quantidade >= 50) {
		desconto_perc = 15;
	} else if (quantidade >= 20) {
		desconto_perc = 10;
	} else if (quantidade >= 10) {
		desconto_perc = 5;
	} else {
		desconto_perc = 0;
	}

	// Calcula valores
	valor_desconto = total * desconto_perc / 100;
	total_desconto = total - valor_desconto;

	// Exibe a saida
	printf("Saida (total sem desconto): %.2f\n", total);
	printf("Saida (percentual desconto): %.0f%%\n", desconto_perc);
	printf("Saida (valor desconto): %.2f\n", valor_desconto);
	printf("Saida (total com desconto): %.2f\n", total_desconto);

	return 0;
}
