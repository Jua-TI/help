#include <stdio.h>

int main(void) {
	int v[10];
	int i;
	int menor = 0;
	int pos = 0;

	// Le 10 numeros inteiros e encontra o menor
	for (i = 0; i < 10; i++) {
		scanf("%d", &v[i]);
		if (i == 0 || v[i] < menor) {
			menor = v[i];
			pos = i;
		}
	}

	// Exibe menor valor e posicao
	printf("Saida: %d\n", menor);
	printf("Saida: %d\n", pos);

	return 0;
}
