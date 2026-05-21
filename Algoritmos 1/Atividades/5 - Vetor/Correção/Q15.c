#include <stdio.h>

int main(void) {
	int v[10];
	int i;
	int x;
	int cont = 0;

	// Le 10 numeros inteiros
	for (i = 0; i < 10; i++) {
		scanf("%d", &v[i]);
	}

	// Le o valor X
	scanf("%d", &x);

	// Conta as ocorrencias de X
	for (i = 0; i < 10; i++) {
		if (v[i] == x) {
			cont++;
		}
	}

	// Exibe a quantidade
	printf("Saida: %d\n", cont);

	return 0;
}
