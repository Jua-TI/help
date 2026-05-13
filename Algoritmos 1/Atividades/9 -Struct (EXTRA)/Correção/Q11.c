#include <stdio.h>

typedef struct {
	char nome[50];
	double nota;
} Aluno;

int main(void) {
	Aluno alunos[5];
	int i;
	int idx = 0;

	// Le os alunos
	for (i = 0; i < 5; i++) {
		scanf("%49s %lf", alunos[i].nome, &alunos[i].nota);
		if (i == 0 || alunos[i].nota > alunos[idx].nota) {
			idx = i;
		}
	}

	printf("Saida: %s\n", alunos[idx].nome);

	return 0;
}
