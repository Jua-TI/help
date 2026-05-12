#include <stdio.h>

int main(void) {
	char caractere;

	// Le um caractere usando getchar()
	caractere = getchar();

	// Imprime o caractere 5 vezes usando putchar()
	putchar(caractere);
	putchar(caractere);
	putchar(caractere);
	putchar(caractere);
	putchar(caractere);
	putchar('\n');

	return 0;
}
