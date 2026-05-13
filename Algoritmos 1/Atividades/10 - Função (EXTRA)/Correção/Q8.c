#include <stdio.h>

static void maior_menor(const int v[], int n, int *maior, int *menor) {
	int i;
	*maior = v[0];
	*menor = v[0];

	for (i = 1; i < n; i++) {
		if (v[i] > *maior) {
			*maior = v[i];
		}
		if (v[i] < *menor) {
			*menor = v[i];
		}
	}
}

int main(void) {
	int v[20];
	int n;
	int i;
	int maior, menor;

	// Le N
	scanf("%d", &n);

	// Le o vetor
	for (i = 0; i < n; i++) {
		scanf("%d", &v[i]);
	}

	maior_menor(v, n, &maior, &menor);

	printf("Saida: %d\n", maior);
	printf("Saida: %d\n", menor);

	return 0;
}
