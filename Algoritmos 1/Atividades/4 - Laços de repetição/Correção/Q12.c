#include <stdio.h>

int main(void) {
	int n, i, numero, maior, menor;

	// Le a quantidade de numeros
	scanf("%d", &n);

	// Le o primeiro numero
	scanf("%d", &numero);
	maior = numero;
	menor = numero;

	// Le os demais numeros e encontra maior e menor
	for (i = 1; i < n; i++) {
		scanf("%d", &numero);
		
		if (numero > maior) {
			maior = numero;
		}
		if (numero < menor) {
			menor = numero;
		}
	}

	// Exibe a saida
	printf("Saida (maior): %d\n", maior);
	printf("Saida (menor): %d\n", menor);
	return 0;
}
