#include <stdio.h>
#include <stdlib.h>

/*
15. Faça um programa em C que leia o valor de um produto, o percentual do des-
conto desejado e imprima o valor do desconto e o valor do produto subtraindo o
desconto.
*/

int main(void){
	double produt, desc, valor_desc, valor_prod_subt;
        
	printf("\nDigite o valor do produto");
	scanf("%lf",&produt);

	printf("\nDigite a percentagem de desconto desejada");
        scanf("%lf",&desc);

	valor_desc = (produt * desc)/100;
	valor_prod_subt = (produt - desc);

	printf("\nO valor do produt: %.2lf",produt);
	printf("\nO valor do desconto: %.2lf",valor_desc);
	printf("\nO valor do produto subtraido pelo desconto: %.2lf",valor_prod_subt);
        return 0;
}

