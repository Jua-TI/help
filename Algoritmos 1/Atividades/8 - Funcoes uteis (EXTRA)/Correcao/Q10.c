#include <stdio.h>
#include <string.h>

int main(void) {
	char string1[100], string2[100];
	int resultado;

	// Le duas strings
	scanf("%99s %99s", string1, string2);

	// Compara usando strcmp()
	resultado = strcmp(string1, string2);

	// Exibe o resultado
	if (resultado == 0) {
		printf("Saida: Strings sao iguais\n");
	} else if (resultado < 0) {
		printf("Saida: %s eh menor que %s\n", string1, string2);
	} else {
		printf("Saida: %s eh maior que %s\n", string1, string2);
	}

	return 0;
}
