#include <stdio.h>

int main(void)
{
    int n;
    int a, b, c;
    int invertido;

    // Le um inteiro de tres digitos
    scanf("%d", &n);

    // Separa e inverte os digitos
    a = n / 100;
    b = (n / 10) % 10;
    c = n % 10;
    invertido = c * 100 + b * 10 + a;

    // Exibe a saida
    printf("Saida (invertido): %d\n", invertido);
    return 0;
}
