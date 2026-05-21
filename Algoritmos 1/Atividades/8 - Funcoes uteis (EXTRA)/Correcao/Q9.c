#include <stdio.h>
#include <string.h>

int main(void) {
	char string1[100], string2[100], resultado[200];

	// Le duas strings
	scanf("%99s %99s", string1, string2);

	// Copia a primeira string para resultado
	strcpy(resultado, string1);

	// Concatena a segunda string usando strcat()
	strcat(resultado, string2);

	// Exibe o resultado
	printf("Saida: %s\n", resultado);
	return 0;
}
