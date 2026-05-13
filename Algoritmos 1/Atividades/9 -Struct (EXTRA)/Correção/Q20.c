#include <stdio.h>

typedef struct {
	char nome[50];
	char telefone[20];
	char email[50];
} Contato;

int main(void) {
	Contato contatos[5];
	int n;
	int i;

	// Le N
	scanf("%d", &n);

	// Le os contatos
	for (i = 0; i < n; i++) {
		scanf("%49s %19s %49s", contatos[i].nome, contatos[i].telefone, contatos[i].email);
	}

	// Exibe os contatos
	for (i = 0; i < n; i++) {
		printf("Saida: %s %s %s\n", contatos[i].nome, contatos[i].telefone, contatos[i].email);
	}

	return 0;
}
