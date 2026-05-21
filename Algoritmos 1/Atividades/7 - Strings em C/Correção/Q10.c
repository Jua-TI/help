#include <stdio.h>
#include <string.h>

int main(void) {
	char a[100];
	char b[100];

	// Le uma palavra
	scanf("%99s", a);

	// Copia para outra string
	strcpy(b, a);

	printf("Saida: %s\n", b);

	return 0;
}
