#include <stdio.h>
#include <stdlib.h>


/*
	3) Fa�a um programa em C para trocar o valor de duas vari�veis inteiras sem utilizar nenhuma vari�vel auxiliar. 
*/

int main() {

	int a, b;
	
	printf("insira um numero inteiro\n");
	scanf("%d",&a);
	
	printf("insira um outro numero inteiro\n");
	scanf("%d",&b);
	
	a = b;
	b = a;
	
	printf("a igual: %d\n",a);
	printf("b igual: %d\n",b);
	return 0;
}
