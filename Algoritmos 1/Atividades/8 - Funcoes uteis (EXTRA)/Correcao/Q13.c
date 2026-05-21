#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void) {
	char string[100], maiuscula[100], minuscula[100];
	int i;

	// Le uma string
	scanf("%99s", string);

	// Converte para maiuscula
	strcpy(maiuscula, string);
	for (i = 0; maiuscula[i] != '\0'; i++) {
		maiuscula[i] = toupper(maiuscula[i]);
	}

	// Converte para minuscula
	strcpy(minuscula, string);
	for (i = 0; minuscula[i] != '\0'; i++) {
		minuscula[i] = tolower(minuscula[i]);
	}

	// Exibe os resultados
	printf("Saida (maiuscula): %s\n", maiuscula);
	printf("Saida (minuscula): %s\n", minuscula);
	return 0;
}
