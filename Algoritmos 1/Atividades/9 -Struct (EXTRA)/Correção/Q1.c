#include <stdio.h>

typedef struct {
	char nome[50];
	int idade;
} Aluno;

int main(void) {
	Aluno a;

	// Le nome e idade
	scanf("%49s %d", a.nome, &a.idade);

	// Exibe os dados
	printf("Saida: %s\n", a.nome);
	printf("Saida: %d\n", a.idade);

	return 0;
}
