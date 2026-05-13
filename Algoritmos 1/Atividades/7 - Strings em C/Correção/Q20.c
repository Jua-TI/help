#include <stdio.h>
#include <ctype.h>
#include <string.h>

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
	int consoantes = 0;
	int digitos = 0;

	// Le uma frase
	fgets(s, sizeof(s), stdin);
	remove_newline(s);

	// Analisa a frase
	for (i = 0; s[i] != '\0'; i++) {
		if (isalpha((unsigned char)s[i])) {
			if (is_vowel(s[i])) {
				vogais++;
			} else {
				consoantes++;
			}
		} else if (isdigit((unsigned char)s[i])) {
			digitos++;
		}
	}

	printf("Saida: %d\n", (int)strlen(s));
	printf("Saida: %d\n", vogais);
	printf("Saida: %d\n", consoantes);
	printf("Saida: %d\n", digitos);

	return 0;
}
