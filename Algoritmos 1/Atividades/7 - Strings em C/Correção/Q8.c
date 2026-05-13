#include <stdio.h>
#include <string.h>

int main(void) {
	char a[100];
	char b[100];

	// Le duas palavras
	scanf("%99s %99s", a, b);

	// Compara as palavras
	if (strcmp(a, b) == 0) {
		printf("Saida: Iguais\n");
	} else {
		printf("Saida: Diferentes\n");
	}

	return 0;
}
