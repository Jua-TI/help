#include <stdio.h>

int main(void) {
	int a, b, resto;

	// Le dois numeros inteiros
	scanf("%d %d", &a, &b);

	// Calcula o resto da divisao
	resto = a % b;

	// Exibe a saida
	printf("Saida (resto): %d\n", resto);
	return 0;
}
