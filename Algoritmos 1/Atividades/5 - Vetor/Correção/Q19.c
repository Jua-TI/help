#include <stdio.h>

int main(void) {
	int a[5];
	int b[5];
	int c[10];
	int i;

	// Le o vetor A
	for (i = 0; i < 5; i++) {
		scanf("%d", &a[i]);
	}

	// Le o vetor B
	for (i = 0; i < 5; i++) {
		scanf("%d", &b[i]);
	}

	// Intercala A e B em C
	for (i = 0; i < 5; i++) {
		c[2 * i] = a[i];
		c[2 * i + 1] = b[i];
	}

	// Exibe o vetor intercalado
	for (i = 0; i < 10; i++) {
		printf("Saida: %d\n", c[i]);
	}

	return 0;
}
