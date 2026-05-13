#include <stdio.h>

static void remove_newline(char *s) {
	int i = 0;
	while (s[i] != '\0') {
		if (s[i] == '\n') {
			s[i] = '\0';
			break;
		}
		i++;
	}
}

int main(void) {
	char s[200];
	int i;
	int palavras = 0;
	int em_palavra = 0;

	// Le uma frase
	fgets(s, sizeof(s), stdin);
	remove_newline(s);

	// Conta palavras
	for (i = 0; s[i] != '\0'; i++) {
		if (s[i] != ' ' && s[i] != '\t') {
			if (!em_palavra) {
				palavras++;
				em_palavra = 1;
			}
		} else {
			em_palavra = 0;
		}
	}

	printf("Saida: %d\n", palavras);

	return 0;
}
