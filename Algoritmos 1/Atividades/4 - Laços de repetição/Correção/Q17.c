#include <stdio.h>

int main(void) {
	int n, i;
	long fib1 = 0, fib2 = 1, proximo;

	// Le um numero inteiro
	scanf("%d", &n);

	// Imprime os primeiros N numeros de Fibonacci
	for (i = 0; i < n; i++) {
		if (i == 0) {
			printf("Saida: %ld\n", fib1);
		} else if (i == 1) {
			printf("Saida: %ld\n", fib2);
		} else {
			proximo = fib1 + fib2;
			printf("Saida: %ld\n", proximo);
			fib1 = fib2;
			fib2 = proximo;
		}
	}

	return 0;
}
