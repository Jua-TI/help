#include <stdio.h>

static void para_binario(int n, char *out) {
	char temp[40];
	int i = 0;
	int j;

	if (n == 0) {
		out[0] = '0';
		out[1] = '\0';
		return;
	}

	if (n < 0) {
		n = -n;
	}

	while (n > 0) {
		temp[i++] = (char)('0' + (n % 2));
		n /= 2;
	}

	for (j = 0; j < i; j++) {
		out[j] = temp[i - 1 - j];
	}
	out[i] = '\0';
}

int main(void) {
	int n;
	char bin[40];

	// Le N
	scanf("%d", &n);

	para_binario(n, bin);

	printf("Saida: %s\n", bin);

	return 0;
}
