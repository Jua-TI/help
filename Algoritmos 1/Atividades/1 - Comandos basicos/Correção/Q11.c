#include <stdio.h>

int main(void) {
	int a, b;
	float media;

	// Le dois numeros inteiros
	scanf("%d %d", &a, &b);

	// Converte para float e calcula a media
	media = ((float)a + (float)b) / 2.0;

	// Exibe a saida com tres casas decimais
	printf("Saida (media): %.3f\n", media);
	return 0;
}
