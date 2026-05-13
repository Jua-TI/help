#include <stdio.h>
#include <string.h>

int main(void) {
	char a[100];
	char b[100];
	char res[200];

	// Le duas palavras
	scanf("%99s %99s", a, b);

	// Concatena
	strcpy(res, a);
	strcat(res, b);

	printf("Saida: %s\n", res);

	return 0;
}
