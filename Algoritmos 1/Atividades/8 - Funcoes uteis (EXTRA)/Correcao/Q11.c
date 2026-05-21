#include <stdio.h>
#include <string.h>

int main(void) {
	char string[100], caractere;
	char *posicao;
	int indice;

	// Le uma string e um caractere
	scanf("%99s %c", string, &caractere);

	// Procura o caractere usando strchr()
	posicao = strchr(string, caractere);

	// Exibe o resultado
	if (posicao != NULL) {
		indice = posicao - string;
		printf("Saida: %d\n", indice);
	} else {
		printf("Saida: nao encontrado\n");
	}

	return 0;
}
