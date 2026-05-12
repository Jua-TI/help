#include <stdio.h>

int main(void) {
	int n, i, numero, x, contagem = 0;

	// Le N e depois N numeros e o valor X
	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%d", &numero);
	}

	// Le o valor X
	scanf("%d", &x);

	// Re-le N numeros e conta ocorrencias de X
	scanf("%d", &n);  // Re-entrada de N para leitura novamente
	for (i = 0; i < n; i++) {
		scanf("%d", &numero);
		if (numero == x) {
			contagem++;
		}
	}

	// Exibe a saida
	printf("Saida: %d\n", contagem);
	return 0;
}
