#include <stdio.h>

int main(void) {
	int a[10];
	int b[10];
	int i;

	// Le o vetor A
	for (i = 0; i < 10; i++) {
		scanf("%d", &a[i]);
	}

	// Le o vetor B
	for (i = 0; i < 10; i++) {
		scanf("%d", &b[i]);
	}

	// Exibe a soma A + B
	for (i = 0; i < 10; i++) {
		printf("Saida: %d\n", a[i] + b[i]);
	}

	return 0;
}
