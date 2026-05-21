#include <stdio.h>

int main(void) {
	int ano;

	// Le um ano
	scanf("%d", &ano);

	// Verifica se eh bissexto
	// Bissexto se: divisivel por 4 E nao por 100, OU divisivel por 400
	if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
		printf("Saida: Bissexto\n");
	} else {
		printf("Saida: Nao bissexto\n");
	}

	return 0;
}
