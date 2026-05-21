#include <stdio.h>

typedef struct {
	char nome[50];
	int idade;
} Pessoa;

int main(void) {
	Pessoa p1;
	Pessoa p2;

	// Le duas pessoas
	scanf("%49s %d", p1.nome, &p1.idade);
	scanf("%49s %d", p2.nome, &p2.idade);

	// Imprime a mais velha
	if (p1.idade >= p2.idade) {
		printf("Saida: %s\n", p1.nome);
	} else {
		printf("Saida: %s\n", p2.nome);
	}

	return 0;
}
