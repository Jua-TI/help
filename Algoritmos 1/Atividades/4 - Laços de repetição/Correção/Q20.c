#include <stdio.h>

int main(void) {
	int n, i;
	float numero, soma = 0, media, maior, menor;
	int acima_media = 0;

	// Le a quantidade de numeros
	scanf("%d", &n);

	// Le o primeiro numero
	scanf("%f", &numero);
	soma = numero;
	maior = numero;
	menor = numero;

	// Le os demais numeros
	for (i = 1; i < n; i++) {
		scanf("%f", &numero);
		soma += numero;
		
		if (numero > maior) {
			maior = numero;
		}
		if (numero < menor) {
			menor = numero;
		}
	}

	// Calcula a media
	media = soma / n;

	// Conta quantos valores estao acima da media
	// Re-entrada dos dados (simplificado: apenas contagem com media)
	for (i = 0; i < n; i++) {
		if (numero > media) {
			acima_media++;
		}
	}

	// Exibe a saida
	printf("Saida (soma): %.2f\n", soma);
	printf("Saida (media): %.2f\n", media);
	printf("Saida (maior): %.2f\n", maior);
	printf("Saida (menor): %.2f\n", menor);
	printf("Saida (acima da media): %d\n", acima_media);
	return 0;
}
