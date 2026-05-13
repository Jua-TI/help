#include <stdio.h>

typedef struct {
	char nome[50];
	double nota;
} Aluno;

// Le os dados de um aluno.
void ler_aluno(Aluno *a) {
	scanf("%49s %lf", a->nome, &a->nota);
}

// Calcula a media das notas da turma.
double media_turma(const Aluno alunos[], int n) {
	int i;
	double soma = 0.0;

	for (i = 0; i < n; i++) {
		soma += alunos[i].nota;
	}

	return soma / n;
}

// Retorna o indice do aluno com maior nota.
int indice_maior_nota(const Aluno alunos[], int n) {
	int i;
	int idx = 0;

	for (i = 1; i < n; i++) {
		if (alunos[i].nota > alunos[idx].nota) {
			idx = i;
		}
	}

	return idx;
}

int main(void) {
	Aluno alunos[5];
	int n;
	int i;
	double media;
	int idx;

	// Le N
	scanf("%d", &n);

	// Le os alunos
	for (i = 0; i < n; i++) {
		ler_aluno(&alunos[i]);
	}

	media = media_turma(alunos, n);
	idx = indice_maior_nota(alunos, n);

	printf("Saida: %.2f\n", media);
	printf("Saida: %s\n", alunos[idx].nome);

	return 0;
}
