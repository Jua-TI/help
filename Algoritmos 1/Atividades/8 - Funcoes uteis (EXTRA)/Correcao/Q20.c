#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(void) {
	int lancamentos, i, face;
	int frequencia[7] = {0};  // frequencia[0] nao eh usado, 1 a 6
	float percentual;

	// Le o numero de lancamentos
	scanf("%d", &lancamentos);

	// Inicializa o gerador aleatorio
	srand(time(NULL));

	// Simula os lancamentos
	for (i = 0; i < lancamentos; i++) {
		face = (rand() % 6) + 1;  // Gera numero entre 1 e 6
		frequencia[face]++;
	}

	// Exibe os resultados
	printf("Saida (resultados):\n");
	for (i = 1; i <= 6; i++) {
		percentual = (frequencia[i] * 100.0) / lancamentos;
		printf("Face %d: %d vezes (%.2f%%)\n", i, frequencia[i], percentual);
	}

	return 0;
}
