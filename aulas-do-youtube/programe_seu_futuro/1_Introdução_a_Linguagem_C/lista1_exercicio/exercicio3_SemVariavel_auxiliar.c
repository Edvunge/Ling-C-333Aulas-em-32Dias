#include <stdio.h>
#include <stdlib.h>
/*
3) Fa�a um programa em C para trocar o valor de duas vari�veis inteiras sem utilizar nenhuma
vari�vel auxiliar.
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
