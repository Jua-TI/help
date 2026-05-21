#include <stdio.h>

int main(void) {
	int a[10];
	int b[10];
	int i;
	long long produto = 0;

	// Le o vetor A
	for (i = 0; i < 10; i++) {
		scanf("%d", &a[i]);
	}

	// Le o vetor B
	for (i = 0; i < 10; i++) {
		scanf("%d", &b[i]);
	}

	// Calcula o produto escalar
	for (i = 0; i < 10; i++) {
		produto += (long long)a[i] * b[i];
	}

	// Exibe o resultado
	printf("Saida: %lld\n", produto);

	return 0;
}
