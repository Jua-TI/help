#include <stdio.h>

typedef struct {
	int matricula;
	char nome[50];
} Aluno;

int main(void) {
	Aluno alunos[5];
	int n;
	int i;
	int busca;
	int encontrado = 0;

	// Le N
	scanf("%d", &n);

	// Le os alunos
	for (i = 0; i < n; i++) {
		scanf("%d %49s", &alunos[i].matricula, alunos[i].nome);
	}

	// Le a matricula a buscar
	scanf("%d", &busca);

	for (i = 0; i < n; i++) {
		if (alunos[i].matricula == busca) {
			printf("Saida: %s\n", alunos[i].nome);
			encontrado = 1;
			break;
		}
	}

	if (!encontrado) {
		printf("Saida: Nao encontrado\n");
	}

	return 0;
}
