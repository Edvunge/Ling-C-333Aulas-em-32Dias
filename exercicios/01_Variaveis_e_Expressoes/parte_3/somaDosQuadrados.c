#include <stdio.h>
#include <stdlib.h>

/*
        28. Fac¸a a leitura de tr ˆes valores e apresente como resultado a soma dos quadrados dos
tr ˆes valores lidos.
*/

int main() {

	int nota1, nota2, nota3;
	
	printf("insira tres valores para as notas: ");
	scanf("%d%d%d",&nota1, &nota2 ,&nota3);
	
	int  somaDosQuadrados = ( (nota1*nota1) + (nota2*nota2) + (nota3*nota3) );
	printf("o resultado da soma dos Quadrados sera de: %d", somaDosQuadrados);
	
	return 0;
}
