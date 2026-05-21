#include <stdio.h>

int main(void) {
	float nota;

	// Le a nota
	scanf("%f", &nota);

	// Classifica o aluno
	if (nota >= 7) {
		printf("Saida: Aprovado\n");
	} else if (nota >= 5 && nota < 7) {
		printf("Saida: Recuperacao\n");
	} else {
		printf("Saida: Reprovado\n");
	}

	return 0;
}
