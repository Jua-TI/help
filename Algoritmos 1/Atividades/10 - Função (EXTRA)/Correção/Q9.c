#include <stdio.h>

static void ordenar(int v[], int n) {
	int i, j;
	int temp;

	for (i = 0; i < n - 1; i++) {
		for (j = 0; j < n - 1 - i; j++) {
			if (v[j] > v[j + 1]) {
				temp = v[j];
				v[j] = v[j + 1];
				v[j + 1] = temp;
			}
		}
	}
}

static double mediana(const int v[], int n) {
	if (n % 2 == 1) {
		return v[n / 2];
	}

	return (v[n / 2 - 1] + v[n / 2]) / 2.0;
}

int main(void) {
	int v[20];
	int n;
	int i;

	// Le N
	scanf("%d", &n);

	// Le o vetor
	for (i = 0; i < n; i++) {
		scanf("%d", &v[i]);
	}

	ordenar(v, n);

	printf("Saida: %.2f\n", mediana(v, n));

	return 0;
}
