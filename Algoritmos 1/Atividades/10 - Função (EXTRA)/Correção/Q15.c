#include <stdio.h>

// Inverte a string no proprio vetor de caracteres.
void inverte(char *s) {
	int i = 0;
	int j;
	char temp;

	while (s[i] != '\0') {
		i++;
	}
	j = i - 1;

	for (i = 0; i < j; i++, j--) {
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}

int main(void) {
	char s[100];

	// Le uma palavra
	scanf("%99s", s);

	inverte(s);

	printf("Saida: %s\n", s);

	return 0;
}
