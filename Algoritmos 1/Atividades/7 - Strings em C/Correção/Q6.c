#include <stdio.h>

int main(void) {
	char s[100];
	int i = 0;

	// Le uma palavra
	scanf("%99s", s);

	// Encontra o tamanho
	while (s[i] != '\0') {
		i++;
	}

	// Exibe a palavra invertida
	printf("Saida: ");
	for (i = i - 1; i >= 0; i--) {
		printf("%c", s[i]);
	}
	printf("\n");

	return 0;
}
