#include <stdio.h>

typedef struct {
	double saldo;
} Conta;

int main(void) {
	Conta c;
	double deposito;
	double saque;

	// Le saldo inicial, deposito e saque
	scanf("%lf %lf %lf", &c.saldo, &deposito, &saque);

	c.saldo = c.saldo + deposito - saque;

	printf("Saida: %.2f\n", c.saldo);

	return 0;
}
