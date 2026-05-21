#include <stdio.h>

typedef struct {
	int dia;
	int mes;
	int ano;
} Data;

int main(void) {
	Data d1;
	Data d2;
	Data mais_recente;

	// Le as duas datas
	scanf("%d %d %d", &d1.dia, &d1.mes, &d1.ano);
	scanf("%d %d %d", &d2.dia, &d2.mes, &d2.ano);

	// Compara as datas
	if (d1.ano > d2.ano) {
		mais_recente = d1;
	} else if (d1.ano < d2.ano) {
		mais_recente = d2;
	} else if (d1.mes > d2.mes) {
		mais_recente = d1;
	} else if (d1.mes < d2.mes) {
		mais_recente = d2;
	} else if (d1.dia >= d2.dia) {
		mais_recente = d1;
	} else {
		mais_recente = d2;
	}

	printf("Saida: %d %d %d\n", mais_recente.dia, mais_recente.mes, mais_recente.ano);

	return 0;
}
