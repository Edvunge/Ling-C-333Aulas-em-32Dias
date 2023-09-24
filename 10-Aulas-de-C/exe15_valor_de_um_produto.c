#include <stdio.h>
#include <stdlib.h>

/*
15. Faça um programa em C que leia o valor de um produto, o percentual do des-
conto desejado e imprima o valor do desconto e o valor do produto subtraindo o
desconto.
*/

int main(void){
    double valorDeUmProduto, percentagemDesconto;

    printf("\nDigite o valor do produto: ");
    scanf("%lf",&valorDeUmProduto);

    printf("\nValor da percentagem de desconto: ");
    scanf("%lf",&percentagemDesconto);
    
    percentagemDesconto = (valorDeUmProduto * percentagemDesconto)/100;
    valorDeUmProduto    = (valorDeUmProduto - percentagemDesconto);
    
    printf("\nO valor de um produto: %lf ",valorDeUmProduto);
    return (0);
}