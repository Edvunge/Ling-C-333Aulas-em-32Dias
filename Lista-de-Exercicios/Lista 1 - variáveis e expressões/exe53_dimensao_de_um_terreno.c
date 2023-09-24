#include <stdlib.h>
#include <stdio.h>
/*
53. Faça um programa para ler as dimensões de um terreno (comprimento c e largura l),
bem como o preço do metro de tela p. Imprima o custo para cercar este mesmo terreno
com tela.
*/
int main(void){
    float comprimento_c, largura_l, preco_do_metro_de_tela, custo_do_terreno, dimensao_do_terreno;

    printf("\nDigite o valor da largura: ");
    scanf("%f",&largura_l);

    printf("\nDigite o valor do comprimento: ");
    scanf("%f",&comprimento_c);

    preco_do_metro_de_tela = 2.45;

    dimensao_do_terreno = (comprimento_c * largura_l);
    // c = (s * l)
    custo_do_terreno = (dimensao_do_terreno * preco_do_metro_de_tela);

    printf("\nO custo do terreno e de: %.2f",custo_do_terreno);
    return 0;
}