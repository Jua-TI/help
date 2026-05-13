#include <stdio.h>

int main(void) {
	int v[10];
	int i;

	// Le 10 numeros inteiros
	for (i = 0; i < 10; i++) {
		scanf("%d", &v[i]);
	}

	// Exibe os valores na mesma linha
	printf("Saida: ");
	for (i = 0; i < 10; i++) {
		if (i > 0) {
			printf(" ");
		}
		printf("%d", v[i]);
	}
	printf("\n");

	return 0;
}
