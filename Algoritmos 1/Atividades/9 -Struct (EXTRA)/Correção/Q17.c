#include <stdio.h>

typedef struct {
	int codigo;
	int quantidade;
	double preco;
} Item;

int main(void) {
	Item item;
	double total;

	// Le o item
	scanf("%d %d %lf", &item.codigo, &item.quantidade, &item.preco);

	total = item.quantidade * item.preco;

	printf("Saida: %.2f\n", total);

	return 0;
}
