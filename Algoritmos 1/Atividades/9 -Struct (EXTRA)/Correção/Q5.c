#include <stdio.h>

typedef struct {
	char nome[50];
	double preco;
} Produto;

int main(void) {
	Produto produtos[3];
	int i;
	int idx = 0;

	// Le os produtos
	for (i = 0; i < 3; i++) {
		scanf("%49s %lf", produtos[i].nome, &produtos[i].preco);
		if (i == 0 || produtos[i].preco > produtos[idx].preco) {
			idx = i;
		}
	}

	printf("Saida: %s\n", produtos[idx].nome);

	return 0;
}
