#include <stdio.h>
#include <ctype.h>

int main(void) {
	char caractere;

	// Le um caractere
	scanf("%c", &caractere);

	// Verifica as propriedades do caractere
	if (isalpha(caractere)) {
		printf("Saida: eh letra\n");
	} else {
		printf("Saida: nao eh letra\n");
	}

	if (isdigit(caractere)) {
		printf("Saida: eh digito\n");
	} else {
		printf("Saida: nao eh digito\n");
	}

	if (isupper(caractere)) {
		printf("Saida: eh maiuscula\n");
	} else {
		printf("Saida: nao eh maiuscula\n");
	}

	if (islower(caractere)) {
		printf("Saida: eh minuscula\n");
	} else {
		printf("Saida: nao eh minuscula\n");
	}

	return 0;
}
