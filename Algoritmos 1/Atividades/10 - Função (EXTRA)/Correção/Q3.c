#include <stdio.h>

static long long fatorial(int n) {
	int i;
	long long f = 1;

	for (i = 2; i <= n; i++) {
		f *= i;
	}

	return f;
}

int main(void) {
	int n, k;
	long long comb;

	// Le n e k
	scanf("%d %d", &n, &k);

	comb = fatorial(n) / (fatorial(k) * fatorial(n - k));

	printf("Saida: %lld\n", comb);

	return 0;
}
