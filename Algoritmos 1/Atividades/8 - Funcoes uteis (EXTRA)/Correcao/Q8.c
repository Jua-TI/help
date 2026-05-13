#include <stdio.h>
#include <string.h>

int main(void) {
	char stringOriginal[100], stringCopia[100];

	// Le uma string
	scanf("%99s", stringOriginal);

	// Copia usando strcpy()
	strcpy(stringCopia, stringOriginal);

	// Exibe ambas
	printf("Saida (original): %s\n", stringOriginal);
	printf("Saida (copia): %s\n", stringCopia);
	return 0;
}
