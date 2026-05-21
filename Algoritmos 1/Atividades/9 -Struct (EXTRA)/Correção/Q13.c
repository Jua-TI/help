#include <stdio.h>

typedef struct {
	char nome[50];
	double salario;
} Funcionario;

int main(void) {
	Funcionario f[3];
	int i;

	// Le os funcionarios
	for (i = 0; i < 3; i++) {
		scanf("%49s %lf", f[i].nome, &f[i].salario);
	}

	// Aplica aumento e exibe
	for (i = 0; i < 3; i++) {
		f[i].salario = f[i].salario * 1.10;
		printf("Saida: %s\n", f[i].nome);
		printf("Saida: %.2f\n", f[i].salario);
	}

	return 0;
}
