#include <stdio.h>
#include <stdlib.h>
/*
37. Faça um programa que leia o valor de um produto e imprima o valor com desconto, tendo
em vista que o desconto foi de 12%
*/
int main(void){
    float valorDeUmProduto, desconto = 12, valorComDesconto;

    printf("\nDigite o valor de um produto.");
    scanf("%f",&valorDeUmProduto);

    valorComDesconto = (valorDeUmProduto * desconto ) / 100;
    valorComDesconto = valorDeUmProduto - valorComDesconto;

    printf("\nO valor do produto com desconto e de %.2f.",valorComDesconto);
    return 0;
}