#include <stdio.h>

int main(void) {
	float valor, valor_final;

	// Le o valor da compra
	scanf("%f", &valor);

	// Aplica desconto se maior que 100
	if (valor > 100) {
		valor_final = valor * 0.9;  // 10% de desconto
	} else {
		valor_final = valor;
	}

	// Exibe a saida
	printf("Saida: %.2f\n", valor_final);
	return 0;
}
