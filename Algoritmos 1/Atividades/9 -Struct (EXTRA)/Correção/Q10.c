#include <stdio.h>

typedef struct {
	char titulo[50];
	int ano;
} Livro;

int main(void) {
	Livro l1;
	Livro l2;

	// Le dois livros
	scanf("%49s %d", l1.titulo, &l1.ano);
	scanf("%49s %d", l2.titulo, &l2.ano);

	// Imprime o mais recente
	if (l1.ano >= l2.ano) {
		printf("Saida: %s\n", l1.titulo);
	} else {
		printf("Saida: %s\n", l2.titulo);
	}

	return 0;
}
