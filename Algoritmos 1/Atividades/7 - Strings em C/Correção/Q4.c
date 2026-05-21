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
	int consoantes = 0;

	// Le uma frase
	fgets(s, sizeof(s), stdin);
	remove_newline(s);

	// Conta as consoantes
	for (i = 0; s[i] != '\0'; i++) {
		if (isalpha((unsigned char)s[i]) && !is_vowel(s[i])) {
			consoantes++;
		}
	}

	printf("Saida: %d\n", consoantes);

	return 0;
}
