#include <stdio.h>

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

// Copia a string removendo espacos e tabulacoes.
void remove_espacos(const char *src, char *dst) {
	int i, j = 0;
	for (i = 0; src[i] != '\0'; i++) {
		if (src[i] != ' ' && src[i] != '\t') {
			dst[j++] = src[i];
		}
	}
	dst[j] = '\0';
}

// Conta quantas palavras existem na string.
int conta_palavras(const char *s) {
	int i;
	int palavras = 0;
	int em_palavra = 0;

	for (i = 0; s[i] != '\0'; i++) {
		if (s[i] != ' ' && s[i] != '\t') {
			if (!em_palavra) {
				palavras++;
				em_palavra = 1;
			}
		} else {
			em_palavra = 0;
		}
	}

	return palavras;
}

int main(void) {
	char s[200];
	char sem_espacos[200];

	// Le a frase
	fgets(s, sizeof(s), stdin);
	remove_newline(s);

	remove_espacos(s, sem_espacos);

	printf("Saida: %s\n", sem_espacos);
	printf("Saida: %d\n", conta_palavras(s));

	return 0;
}
