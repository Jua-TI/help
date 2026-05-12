#include <stdio.h>

int main(void) {
	int n, i, eh_primo = 1;

	// Le um numero inteiro
	scanf("%d", &n);

	// Verifica se eh primo
	if (n <= 1) {
		eh_primo = 0;
	} else {
		for (i = 2; i * i <= n; i++) {
			if (n % i == 0) {
				eh_primo = 0;
				break;
			}
		}
	}

	// Exibe a saida
	if (eh_primo) {
		printf("Saida: Primo\n");
	} else {
		printf("Saida: Nao primo\n");
	}

	return 0;
}
