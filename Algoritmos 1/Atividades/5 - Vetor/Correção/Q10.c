#include <stdio.h>

int main(void) {
	int a[10];
	int b[10];
	int i;

	// Le 10 numeros inteiros no vetor A
	for (i = 0; i < 10; i++) {
		scanf("%d", &a[i]);
	}

	// Copia A para B
	for (i = 0; i < 10; i++) {
		b[i] = a[i];
	}

	// Exibe o vetor B
	for (i = 0; i < 10; i++) {
		printf("Saida: %d\n", b[i]);
	}

	return 0;
}
