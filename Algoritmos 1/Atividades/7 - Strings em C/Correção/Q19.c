#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void) {
	char a[100];
	char b[100];
	int cont[26] = {0};
	int i;
	int valido = 1;

	// Le duas palavras
	scanf("%99s %99s", a, b);

	if (strlen(a) != strlen(b)) {
		printf("Saida: Nao anagrama\n");
		return 0;
	}

	for (i = 0; a[i] != '\0'; i++) {
		if (!isalpha((unsigned char)a[i]) || !isalpha((unsigned char)b[i])) {
			valido = 0;
			break;
		}
		cont[tolower((unsigned char)a[i]) - 'a']++;
		cont[tolower((unsigned char)b[i]) - 'a']--;
	}

	if (!valido) {
		printf("Saida: Nao anagrama\n");
		return 0;
	}

	for (i = 0; i < 26; i++) {
		if (cont[i] != 0) {
			printf("Saida: Nao anagrama\n");
			return 0;
		}
	}

	printf("Saida: Anagrama\n");

	return 0;
}
