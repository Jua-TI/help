#include <stdio.h>

int main(void) {
	char s[100];
	int i, j;
	char temp;

	// Le uma palavra
	scanf("%99s", s);

	// Ordena os caracteres (bubble sort)
	for (i = 0; s[i] != '\0'; i++) {
		for (j = 0; s[j + 1] != '\0'; j++) {
			if (s[j] > s[j + 1]) {
				temp = s[j];
				s[j] = s[j + 1];
				s[j + 1] = temp;
			}
		}
	}

	printf("Saida: %s\n", s);

	return 0;
}
