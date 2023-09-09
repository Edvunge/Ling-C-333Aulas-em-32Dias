

#include <stdlib.h>
#include <stdio.h>

/*
6. Escreva um programa que, dados dois números inteiros, mostre na tela o maior deles,
assim como a diferença existente entre ambos.
*/

int main(void){
	
	int num1, num2, diferenca;

	printf("digite o primeiro numero");
	scanf("%d",&num1);

	printf("digite o segundo numero");
	scanf("%d",&num2);
	
	if(num1 > num2){
		diferenca = ( num1 - num2);
		printf("o numero %d a diferenca %d ",num1 , diferenca);
	} else {
		diferenca = num2 - num1;
		printf("o numero %d a diferenca %d ",num2 ,diferenca);
	}	
	return 0;
}
