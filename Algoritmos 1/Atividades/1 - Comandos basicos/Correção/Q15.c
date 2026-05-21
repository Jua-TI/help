#include <stdio.h>

int main(void) {
	char nome[21];
	int idade;
	float altura;

	// Le nome, idade e altura
	scanf("%20s %d %f", nome, &idade, &altura);

	// Exibe os valores formatados
	printf("Saida (nome): %s\n", nome);
	printf("Saida (idade): %d\n", idade);
	printf("Saida (altura): %.2f\n", altura);
	return 0;
}
