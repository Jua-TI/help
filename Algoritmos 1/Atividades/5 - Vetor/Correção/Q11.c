#include <stdio.h>

int main(void) {
	int v[10];
	int i;
	int k;

	// Le o multiplicador K
	scanf("%d", &k);

	// Le 10 numeros inteiros
	for (i = 0; i < 10; i++) {
		scanf("%d", &v[i]);
	}

	// Exibe o vetor multiplicado por K
	for (i = 0; i < 10; i++) {
		printf("Saida: %d\n", v[i] * k);
	}

	return 0;
}
