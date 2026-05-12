#include <stdio.h>

int main(void) {
    float total = 780000.0f;
    float primeiro, segundo, terceiro;

    // Define o valor total do premio
    primeiro = total * 0.46f;
    
    // Calcula as partes do premio
    segundo = total * 0.32f;
    terceiro = total - primeiro - segundo;

        // Exibe a saida
        printf("Saida (primeiro): %.2f\nSaida (segundo): %.2f\nSaida (terceiro): %.2f\n",
            primeiro, segundo, terceiro);
    return 0;
}
