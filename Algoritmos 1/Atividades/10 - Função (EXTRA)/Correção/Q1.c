#include <stdio.h>

// Soma os valores entre a e b (inclusive).
int soma_intervalo(int a, int b) {
	int i;
	int soma = 0;

	if (a > b) {
		int temp = a;
		a = b;
		b = temp;
	}

	for (i = a; i <= b; i++) {
		soma += i;
	}

	return soma;
}

int main(void) {
	int a, b;

	// Le A e B
	scanf("%d %d", &a, &b);

	printf("Saida: %d\n", soma_intervalo(a, b));

	return 0;
}
