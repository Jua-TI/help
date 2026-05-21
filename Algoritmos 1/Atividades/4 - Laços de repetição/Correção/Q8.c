#include <stdio.h>

int main(void) {
	int numero, soma = 0;

	// Le numeros até que seja digitado 0
	while (1) {
		scanf("%d", &numero);
		
		// Verifica se eh 0 para encerrar
		if (numero == 0) {
			break;
		}
		
		// Acumula a soma
		soma += numero;
	}

	// Exibe a saida
	printf("Saida: %d\n", soma);
	return 0;
}
