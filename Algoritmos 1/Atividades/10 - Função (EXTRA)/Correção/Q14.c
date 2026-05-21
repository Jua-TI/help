#include <stdio.h>
#include <ctype.h>

// Remove o '\n' do fim da string lida com fgets.
void remove_newline(char *s) {
	int i = 0;
	while (s[i] != '\0') {
		if (s[i] == '\n') {
			s[i] = '\0';
			break;
		}
		i++;
	}
}

// Verifica se o caractere e vogal.
int is_vowel(char c) {
	char lower = (char)tolower((unsigned char)c);
	return lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u';
}

// Conta vogais na string.
int conta_vogais(const char *s) {
	int i;
	int cont = 0;
	for (i = 0; s[i] != '\0'; i++) {
		if (is_vowel(s[i])) {
			cont++;
		}
	}
	return cont;
}

// Conta consoantes na string.
int conta_consoantes(const char *s) {
	int i;
	int cont = 0;
	for (i = 0; s[i] != '\0'; i++) {
		if (isalpha((unsigned char)s[i]) && !is_vowel(s[i])) {
			cont++;
		}
	}
	return cont;
}

int main(void) {
	char s[200];

	// Le a frase
	fgets(s, sizeof(s), stdin);
	remove_newline(s);

	printf("Saida: %d\n", conta_vogais(s));
	printf("Saida: %d\n", conta_consoantes(s));

	return 0;
}
