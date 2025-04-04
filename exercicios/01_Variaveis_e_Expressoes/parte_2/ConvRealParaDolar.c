#include <stdio.h>
#include <stdlib.h>

/*
        30. Leia um valor em real e a cotacao do dolar. 
		Em seguida, imprima o valor correspondente em dolares.
*/

int main() {

	float cotacaoReal;
	
	printf("indique o valor em dolar:?");
	scanf("%f",&cotacaoReal);
	
	float cotacaoDolar = (cotacaoReal * 2.8);
	printf("valor em dolar: %.2f",cotacaoDolar);
	
	return 0;
}
