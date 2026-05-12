#include <stdio.h>

int main(void)
{
    float n1, n2, n3, n4, media;

    // Le quatro notas
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

    // Calcula a media aritmetica
    media = (n1 + n2 + n3 + n4) / 4.0f;

    // Exibe a saida
    printf("Saida (media): %.2f\n", media);
    return 0;
}
