#include <stdio.h>

int main(void) {
	float salario, emprestimo;

	// Le salario e valor do emprestimo
	scanf("%f %f", &salario, &emprestimo);

	// Verifica autorizacao
	if (salario >= 2000 && emprestimo <= (salario * 10)) {
		printf("Saida: Autorizado\n");
	} else {
		printf("Saida: Negado\n");
		
		// Exibe motivo
		if (salario < 2000) {
			printf("Saida (motivo): Salario inferior a 2000\n");
		}
		if (emprestimo > (salario * 10)) {
			printf("Saida (motivo): Emprestimo superior a 10 vezes o salario\n");
		}
	}

	return 0;
}
