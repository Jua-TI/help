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
	char antigo;
	char novo;
	int i;

	// Le uma frase
	fgets(s, sizeof(s), stdin);
	remove_newline(s);

	// Le os caracteres antigo e novo
	scanf(" %c %c", &antigo, &novo);

	// Substitui as ocorrencias
	for (i = 0; s[i] != '\0'; i++) {
		if (s[i] == antigo) {
			s[i] = novo;
		}
	}

	printf("Saida: %s\n", s);

	return 0;
}
