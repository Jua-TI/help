#include <stdio.h>

int main(void) {
	char s[100];
	char c;
	int i;
	int pos = -1;

	// Le uma palavra e um caractere
	scanf("%99s", s);
	scanf(" %c", &c);

	// Busca a primeira ocorrencia
	for (i = 0; s[i] != '\0'; i++) {
		if (s[i] == c) {
			pos = i;
			break;
		}
	}

	printf("Saida: %d\n", pos);

	return 0;
}
