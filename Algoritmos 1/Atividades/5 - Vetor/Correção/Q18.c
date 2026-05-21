#include <stdio.h>

int main(void) {
	int v[10];
	int i;
	int crescente = 1;

	// Le 10 numeros inteiros
	for (i = 0; i < 10; i++) {
		scanf("%d", &v[i]);
	}

	// Verifica se esta em ordem crescente
	for (i = 1; i < 10; i++) {
		if (v[i] < v[i - 1]) {
			crescente = 0;
			break;
		}
	}

	// Exibe o resultado
	if (crescente) {
		printf("Saida: Crescente\n");
	} else {
		printf("Saida: Nao crescente\n");
	}

	return 0;
}
