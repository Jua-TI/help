#include <stdio.h>

int main(void) {
	char s[100];
	int i = 0;

	// Le uma palavra
	scanf("%99s", s);

	// Calcula o tamanho
	while (s[i] != '\0') {
		i++;
	}

	printf("Saida: %d\n", i);

	return 0;
}
