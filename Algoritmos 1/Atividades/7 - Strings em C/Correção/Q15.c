#include <stdio.h>
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

int main(void) {
	char s[200];
	char atual[200];
	char maior[200] = "";
	int i = 0;
	int j = 0;
	int max = 0;

	// Le uma frase
	fgets(s, sizeof(s), stdin);
	remove_newline(s);

	// Encontra a maior palavra
	while (1) {
		char c = s[i];
		if (c != ' ' && c != '\t' && c != '\0') {
			atual[j++] = c;
		} else {
			if (j > 0) {
				atual[j] = '\0';
				if (j > max) {
					max = j;
					strcpy(maior, atual);
				}
				j = 0;
			}
			if (c == '\0') {
				break;
			}
		}
		i++;
	}

	printf("Saida: %s\n", maior);

	return 0;
}
