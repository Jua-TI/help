#include <stdio.h>

int main(void)
{
    float total;
    float total_desconto;
    float parcela;
    float comissao_vista;
    float comissao_parcelada;

    // Le o valor total da venda
    scanf("%f", &total);

    // Calcula valores da venda
    total_desconto = total * 0.90f;
    parcela = total / 3.0f;
    comissao_vista = total_desconto * 0.05f;
    comissao_parcelada = total * 0.05f;

    // Exibe a saida
    printf("Saida (total com desconto): %.2f\nSaida (parcela 3x): %.2f\nSaida (comissao a vista): %.2f\nSaida (comissao parcelada): %.2f\n",
           total_desconto, parcela, comissao_vista, comissao_parcelada);
    return 0;
}
