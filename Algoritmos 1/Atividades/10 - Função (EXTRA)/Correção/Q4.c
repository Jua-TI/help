#include <stdio.h>

// Retorna 1 se n for primo, caso contrario 0.
int eh_primo(int n) {
	int i;

	if (n < 2) {
		return 0;
	}

	for (i = 2; i * i <= n; i++) {
		if (n % i == 0) {
			return 0;
		}
	}

	return 1;
}

int main(void) {
	int n;

	// Le N
	scanf("%d", &n);

	if (eh_primo(n)) {
		printf("Saida: Primo\n");
	} else {
		printf("Saida: Nao primo\n");
	}

	return 0;
}
