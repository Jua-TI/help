#include <stdio.h>
#include <string.h>

int main(void) {
	char string[100];
	int comprimento;

	// Le uma string
	scanf("%99s", string);

	// Calcula o comprimento usando strlen()
	comprimento = strlen(string);

	// Exibe o resultado
	printf("Saida: %d\n", comprimento);
	return 0;
}
