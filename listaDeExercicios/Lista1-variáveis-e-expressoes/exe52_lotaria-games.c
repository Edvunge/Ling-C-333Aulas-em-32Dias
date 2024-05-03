#include <stdio.h>
/*
52. Três amigos jogaram na loteria. Caso eles ganhem, o prêmio deve ser repartido pro-
porcionalmente ao valor que cada deu para a realização da aposta. Faça um programa
que leia quanto cada apostador investiu, o valor do prêmio, e imprima quanto cada um
ganharia do prêmio com base no valor investido.
*/
int main() {
    float investimento1, investimento2, investimento3;
    float premio_total;

    printf("Digite o valor do investimento do primeiro apostador: ");
    scanf("%f", &investimento1);
    printf("Digite o valor do investimento do segundo apostador: ");
    scanf("%f", &investimento2);
    printf("Digite o valor do investimento do terceiro apostador: ");
    scanf("%f", &investimento3);

    printf("Digite o valor do prêmio total: ");
    scanf("%f", &premio_total);

    float total_investido = investimento1 + investimento2 + investimento3;
    float parte1 = (investimento1 / total_investido) * premio_total;
    float parte2 = (investimento2 / total_investido) * premio_total;
    float parte3 = (investimento3 / total_investido) * premio_total;

    printf("O primeiro apostador ganharia: %.2f\n", parte1);
    printf("O segundo apostador ganharia: %.2f\n", parte2);
    printf("O terceiro apostador ganharia: %.2f\n", parte3);

    return 0;
}
