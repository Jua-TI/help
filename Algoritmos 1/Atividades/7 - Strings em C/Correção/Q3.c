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

static int is_vowel(char c) {
	char lower = (char)tolower((unsigned char)c);
	return lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u';
}

int main(void) {
	char s[200];
	int i;
	int vogais = 0;

	// Le uma frase
	fgets(s, sizeof(s), stdin);
	remove_newline(s);

	// Conta as vogais
	for (i = 0; s[i] != '\0'; i++) {
		if (is_vowel(s[i])) {
			vogais++;
		}
	}

	printf("Saida: %d\n", vogais);

	return 0;
}
