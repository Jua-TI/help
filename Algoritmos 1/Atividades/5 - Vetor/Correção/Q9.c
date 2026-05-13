#include <stdio.h>

int main(void) {
	int v[10];
	int i;

	// Le 10 numeros inteiros
	for (i = 0; i < 10; i++) {
		scanf("%d", &v[i]);
	}

	// Exibe em ordem inversa
	for (i = 9; i >= 0; i--) {
		printf("Saida: %d\n", v[i]);
	}

	return 0;
}
