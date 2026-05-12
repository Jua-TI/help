#include <stdio.h>

int main(void) {
	int idade;

	// Le a idade
	scanf("%d", &idade);

	// Verifica maioridade
	if (idade >= 18) {
		printf("Saida: Maior de idade\n");
	} else {
		printf("Saida: Menor de idade\n");
	}

	return 0;
}
