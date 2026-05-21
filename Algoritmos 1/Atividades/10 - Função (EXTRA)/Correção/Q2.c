#include <stdio.h>

// Calcula o MDC usando o algoritmo de Euclides.
int mdc(int a, int b) {
	int r;

	if (a < 0) {
		a = -a;
	}
	if (b < 0) {
		b = -b;
	}

	while (b != 0) {
		r = a % b;
		a = b;
		b = r;
	}

	return a;
}

// Calcula o MMC usando o MDC.
long long mmc(int a, int b) {
	int d = mdc(a, b);
	long long produto = (long long)a * (long long)b;

	if (produto < 0) {
		produto = -produto;
	}

	return d == 0 ? 0 : produto / d;
}

int main(void) {
	int a, b;

	// Le A e B
	scanf("%d %d", &a, &b);

	printf("Saida: %d\n", mdc(a, b));
	printf("Saida: %lld\n", mmc(a, b));

	return 0;
}
