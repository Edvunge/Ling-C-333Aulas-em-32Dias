#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
1. Escreva um algoritmo na linguagem C que receba o preço de um produto,
calcule e mostre o novo preço, sabendo-se que este sofreu um desconto de 10%.

*/

int main(void){
    setlocale(LC_ALL, "Portuguese");

    double precoDeUmProduto, desconto ,novoPrecoProduto;
    
    printf("\nDigite o preço de um produto: ");
    scanf("%lf",&precoDeUmProduto);
    
    desconto         = (precoDeUmProduto * 10)/100;
    novoPrecoProduto = precoDeUmProduto - desconto;

    printf("\nO resultado do produto final: %.2lf",novoPrecoProduto);

    return (0);
}