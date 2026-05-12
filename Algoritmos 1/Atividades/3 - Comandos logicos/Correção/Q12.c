#include <stdio.h>

int main(void) {
	int idade;

	// Le a idade
	scanf("%d", &idade);

	// Classifica por categoria
	if (idade >= 0 && idade <= 12) {
		printf("Saida: Crianca\n");
	} else if (idade >= 13 && idade <= 17) {
		printf("Saida: Adolescente\n");
	} else if (idade >= 18 && idade <= 59) {
		printf("Saida: Adulto\n");
	} else if (idade >= 60) {
		printf("Saida: Idoso\n");
	} else {
		printf("Saida: Idade invalida\n");
	}

	return 0;
}
