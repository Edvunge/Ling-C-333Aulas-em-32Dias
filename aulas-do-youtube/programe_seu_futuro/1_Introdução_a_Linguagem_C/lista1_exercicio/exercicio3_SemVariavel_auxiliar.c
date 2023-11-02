#include <stdio.h>
#include <stdlib.h>
/*
3) Faça um programa em C para trocar o valor de duas variáveis inteiras sem utilizar nenhuma
variável auxiliar.
*/
int main(void) {
	int a, b;
	
	printf("Digite o valor de a: \n");
	scanf("%d",&a);
	
	printf("Digite o valor de b: \n");
	scanf("%d",&b);
	
	a = a + b;
	b = a - b;
	a = a - b;
	
	printf("a = %d , b = %d",a ,b);
	return 0;
}
