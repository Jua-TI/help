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

static void para_maiusculas(char *s) {
	int i;
	for (i = 0; s[i] != '\0'; i++) {
		s[i] = (char)toupper((unsigned char)s[i]);
	}
}

int main(void) {
	char s[200];

	// Le a frase
	fgets(s, sizeof(s), stdin);
	remove_newline(s);

	para_maiusculas(s);

	printf("Saida: %s\n", s);

	return 0;
}
