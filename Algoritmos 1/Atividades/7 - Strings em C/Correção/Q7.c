#include <stdio.h>

int main(void) {
	char s[100];
	int i = 0;
	int j;
	int palindromo = 1;

	// Le uma palavra
	scanf("%99s", s);

	// Calcula o tamanho
	while (s[i] != '\0') {
		i++;
	}
	j = i - 1;

	// Verifica palindromo
	for (i = 0; i < j; i++, j--) {
		if (s[i] != s[j]) {
			palindromo = 0;
			break;
		}
	}

	if (palindromo) {
		printf("Saida: Palindromo\n");
	} else {
		printf("Saida: Nao palindromo\n");
	}

	return 0;
}
