#include <stdio.h>

int main(void) {
	int v[10];
	int i;
	int maior = 0;
	int pos = 0;

	// Le 10 numeros inteiros e encontra o maior
	for (i = 0; i < 10; i++) {
		scanf("%d", &v[i]);
		if (i == 0 || v[i] > maior) {
			maior = v[i];
			pos = i;
		}
	}

	// Exibe maior valor e posicao
	printf("Saida: %d\n", maior);
	printf("Saida: %d\n", pos);

	return 0;
}
