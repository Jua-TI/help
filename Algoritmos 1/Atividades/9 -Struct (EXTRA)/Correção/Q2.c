#include <stdio.h>

typedef struct {
	char nome[50];
	double nota;
} Aluno;

int main(void) {
	Aluno a;

	// Le nome e nota
	scanf("%49s %lf", a.nome, &a.nota);

	// Verifica aprovacao
	if (a.nota >= 7.0) {
		printf("Saida: Aprovado\n");
	} else {
		printf("Saida: Reprovado\n");
	}

	return 0;
}
