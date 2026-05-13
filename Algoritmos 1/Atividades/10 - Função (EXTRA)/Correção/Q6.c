#include <stdio.h>

// Calcula base elevado ao expoente.
long long potencia(int base, int expo) {
	int i;
	long long resultado = 1;

	for (i = 0; i < expo; i++) {
		resultado *= base;
	}

	return resultado;
}

int main(void) {
	int x, n;
	int i;
	long long soma = 0;

	// Le x e n
	scanf("%d %d", &x, &n);

	for (i = 1; i <= n; i++) {
		soma += potencia(x, i);
	}

	printf("Saida: %lld\n", soma);

	return 0;
}
