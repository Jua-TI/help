#include <stdio.h>

typedef struct {
	char rua[50];
	int numero;
	char cidade[50];
} Endereco;

int main(void) {
	Endereco e;

	// Le os dados do endereco
	scanf("%49s %d %49s", e.rua, &e.numero, e.cidade);

	printf("Saida: %s %d %s\n", e.rua, e.numero, e.cidade);

	return 0;
}
