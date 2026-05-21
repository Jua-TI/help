#include <stdio.h>

int main(void) {
	int a, b, i, resultado = 0;

	// Le dois numeros inteiros
	scanf("%d %d", &a, &b);

	// Calcula A * B usando adições sucessivas
	for (i = 0; i < b; i++) {
		resultado += a;
	}

	// Exibe a saida
	printf("Saida: %d\n", resultado);
	return 0;
}
