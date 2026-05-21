#include <stdio.h>

typedef struct {
	char nome[50];
	double nota;
} Aluno;

int main(void) {
	Aluno alunos[10];
	int n;
	int i;
	double soma = 0.0;
	double media;

	// Le N
	scanf("%d", &n);

	// Le os alunos
	for (i = 0; i < n; i++) {
		scanf("%49s %lf", alunos[i].nome, &alunos[i].nota);
		soma += alunos[i].nota;
	}

	media = soma / n;

	printf("Saida: %.2f\n", media);

	return 0;
}
