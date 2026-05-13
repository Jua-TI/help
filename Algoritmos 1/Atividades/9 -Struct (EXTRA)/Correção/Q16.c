#include <stdio.h>

typedef struct {
	char nome[50];
	int vitorias;
	int empates;
	int derrotas;
} Time;

int main(void) {
	Time t;
	int pontos;

	// Le os dados do time
	scanf("%49s %d %d %d", t.nome, &t.vitorias, &t.empates, &t.derrotas);

	pontos = t.vitorias * 3 + t.empates;

	printf("Saida: %d\n", pontos);

	return 0;
}
