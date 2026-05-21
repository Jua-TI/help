#include <stdio.h>

typedef struct {
	char nome[50];
	double n1;
	double n2;
} Aluno;

int main(void) {
	Aluno a;
	double media;

	// Le nome e duas notas
	scanf("%49s %lf %lf", a.nome, &a.n1, &a.n2);

	media = (a.n1 + a.n2) / 2.0;

	if (media >= 9.0) {
		printf("Saida: A\n");
	} else if (media >= 7.0) {
		printf("Saida: B\n");
	} else {
		printf("Saida: C\n");
	}

	return 0;
}
