#include <stdio.h>

int main(void) {
	int n, i, j;

	// Le um numero inteiro
	scanf("%d", &n);

	// Imprime pirâmide com N linhas
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= i; j++) {
			printf("%d ", j);
		}
		printf("\n");
	}

	return 0;
}
