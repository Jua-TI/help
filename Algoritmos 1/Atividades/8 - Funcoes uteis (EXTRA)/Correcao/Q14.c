#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i, numero;

	// Inicializa o gerador com uma seed (usando 42 como exemplo)
	srand(42);

	// Gera 5 numeros aleatorios entre 1 e 100
	printf("Saida:\n");
	for (i = 0; i < 5; i++) {
		numero = (rand() % 100) + 1;
		printf("%d\n", numero);
	}

	return 0;
}
