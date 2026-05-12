#include <stdio.h>

int main(void) {
	float peso, altura, imc;

	// Le peso e altura
	scanf("%f %f", &peso, &altura);

	// Calcula o IMC
	imc = peso / (altura * altura);

	// Classifica
	printf("Saida (IMC): %.2f\n", imc);
	
	if (imc < 18.5) {
		printf("Saida: Abaixo do peso\n");
	} else if (imc < 25) {
		printf("Saida: Peso normal\n");
	} else if (imc < 30) {
		printf("Saida: Sobrepeso\n");
	} else {
		printf("Saida: Obeso\n");
	}

	return 0;
}
