#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int numero;

	// Le um numero inteiro
	scanf("%d", &numero);

	// Executa um comando do sistema (clear no Linux/Mac, cls no Windows)
	#ifdef _WIN32
		system("cls");
	#else
		system("clear");
	#endif

	// Imprime uma mensagem apos executar o comando
	printf("Saida: Tela foi limpa. Numero lido foi: %d\n", numero);
	return 0;
}
