#include <stdio.h>
#include <stdlib.h>


/*
	37. Faca um programa que leia o valor de um produto e imprima o valor com desconto, tendo
			em vista que o desconto foi de 12%
*/

int main() {

	float valorProduto;
	
	printf("indique o valor do produto :?");
	scanf("%f",&valorProduto);
	
	float descontoP = 12;
	
	float desconto = ( valorProduto * descontoP / 100 );
	valorProduto - desconto;
	
	printf("com o desconto de %.1f o valor final e de: %.2f\n",descontoP ,desconto);
	
	return 0;
}
