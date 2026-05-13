#include <stdio.h>

static int eh_primo(int n) {
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
	int a, b;
	int i;
	int cont = 0;

	// Le A e B
	scanf("%d %d", &a, &b);

	if (a > b) {
		int temp = a;
		a = b;
		b = temp;
	}

	for (i = a; i <= b; i++) {
		if (eh_primo(i)) {
			cont++;
		}
	}

	printf("Saida: %d\n", cont);

	return 0;
}
