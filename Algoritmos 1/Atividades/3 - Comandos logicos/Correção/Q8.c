#include <stdio.h>

int main(void) {
	int a, b;
	char operador;
	int resultado;

	// Le dois numeros e um operador
	scanf("%d %c %d", &a, &operador, &b);

	// Realiza a operacao correspondente
	switch (operador) {
		case '+':
			resultado = a + b;
			break;
		case '-':
			resultado = a - b;
			break;
		case '*':
			resultado = a * b;
			break;
		case '/':
			resultado = a / b;
			break;
		default:
			printf("Saida: Operador invalido\n");
			return 0;
	}

	// Exibe a saida
	printf("Saida: %d\n", resultado);
	return 0;
}
