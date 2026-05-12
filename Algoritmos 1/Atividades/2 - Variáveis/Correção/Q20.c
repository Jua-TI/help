#include <stdio.h>

int main(void)
{
    int total_segundos;
    int horas, minutos, segundos;

    // Le o total de segundos
    scanf("%d", &total_segundos);
    
    // Converte para horas, minutos e segundos
    horas = total_segundos / 3600;
    minutos = (total_segundos % 3600) / 60;
    segundos = total_segundos % 60;

    // Exibe a saida
    printf("Saida (horas): %d\nSaida (minutos): %d\nSaida (segundos): %d\n", horas, minutos, segundos);
    return 0;
}
