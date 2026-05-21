#include <stdio.h>

int main(void) {
	int v[10];
	int i;
	int x;
	int pos = -1;

	// Le 10 numeros inteiros
	for (i = 0; i < 10; i++) {
		scanf("%d", &v[i]);
	}

	// Le o valor X
	scanf("%d", &x);

	// Busca linear pela primeira ocorrencia
	for (i = 0; i < 10; i++) {
		if (v[i] == x) {
			pos = i;
			break;
		}
	}

	// Exibe a posicao ou -1
	printf("Saida: %d\n", pos);

	return 0;
}
