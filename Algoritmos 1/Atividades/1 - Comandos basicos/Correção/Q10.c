#include <stdio.h>

int main(void) {
	char caractere;

	// Le um caractere do teclado
	scanf("%c", &caractere);

	// Exibe o valor ASCII e a representacao
	printf("Saida (ASCII): %d\n", (int)caractere);
	printf("Saida (decimal): %d\n", caractere);
	printf("Saida (char): %c\n", caractere);
	return 0;
}
