#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	int i, numero;

	// Inicializa o gerador com time para melhor randomizacao
	srand(time(NULL));

	// Gera 5 numeros aleatorios entre 1 e 100
	printf("Saida:\n");
	for (i = 0; i < 5; i++) {
		numero = (rand() % 100) + 1;
		printf("%d\n", numero);
	}

	return 0;
}
