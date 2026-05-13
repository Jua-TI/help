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
	char res[200];
	int i, j = 0;

	// Le uma frase
	fgets(s, sizeof(s), stdin);
	remove_newline(s);

	// Remove espacos
	for (i = 0; s[i] != '\0'; i++) {
		if (s[i] != ' ') {
			res[j] = s[i];
			j++;
		}
	}
	res[j] = '\0';

	printf("Saida: %s\n", res);

	return 0;
}
