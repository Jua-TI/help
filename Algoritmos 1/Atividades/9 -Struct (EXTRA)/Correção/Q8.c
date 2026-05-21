#include <stdio.h>

typedef struct {
	int h;
	int m;
	int s;
} Horario;

int main(void) {
	Horario t;

	// Le o horario
	scanf("%d %d %d", &t.h, &t.m, &t.s);

	// Soma 1 segundo
	t.s++;
	if (t.s == 60) {
		t.s = 0;
		t.m++;
		if (t.m == 60) {
			t.m = 0;
			t.h++;
			if (t.h == 24) {
				t.h = 0;
			}
		}
	}

	printf("Saida: %d %d %d\n", t.h, t.m, t.s);

	return 0;
}
