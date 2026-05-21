#include <stdio.h>
#include <ctype.h>

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

	// Le uma frase
	fgets(s, sizeof(s), stdin);
	remove_newline(s);

	// Converte para maiusculas
	for (i = 0; s[i] != '\0'; i++) {
		s[i] = (char)toupper((unsigned char)s[i]);
	}

	printf("Saida: %s\n", s);

	return 0;
}
