#include <stdio.h>

// Retorna a primeira posicao de x ou -1.
int busca_primeira(const int v[], int n, int x) {
	int i;
	for (i = 0; i < n; i++) {
		if (v[i] == x) {
			return i;
		}
	}
	return -1;
}

int main(void) {
	int v[20];
	int n;
	int i;
	int x;

	// Le N
	scanf("%d", &n);

	// Le o vetor
	for (i = 0; i < n; i++) {
		scanf("%d", &v[i]);
	}

	// Le X
	scanf("%d", &x);

	printf("Saida: %d\n", busca_primeira(v, n, x));

	return 0;
}
