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

static void normaliza(const char *src, char *dst) {
	int i, j = 0;
	for (i = 0; src[i] != '\0'; i++) {
		if (src[i] != ' ' && src[i] != '\t') {
			dst[j++] = (char)tolower((unsigned char)src[i]);
		}
	}
	dst[j] = '\0';
}

static int eh_palindromo(const char *s) {
	int i = 0;
	int j;

	while (s[i] != '\0') {
		i++;
	}
	j = i - 1;

	for (i = 0; i < j; i++, j--) {
		if (s[i] != s[j]) {
			return 0;
		}
	}

	return 1;
}

int main(void) {
	char s[200];
	char norm[200];

	// Le a frase
	fgets(s, sizeof(s), stdin);
	remove_newline(s);

	normaliza(s, norm);

	if (eh_palindromo(norm)) {
		printf("Saida: Palindromo\n");
	} else {
		printf("Saida: Nao palindromo\n");
	}

	return 0;
}
