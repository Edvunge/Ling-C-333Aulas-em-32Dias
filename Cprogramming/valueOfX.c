#include <stdio.h>
#include <stdlib.h>
/*
Write a program that asks the user to enter a value for X and then displays the value of the
following polynomial:

*/
int main(void) {
	
	int x, xy;
	
	printf("insira o valor de X.");
	scanf("%s",&x);
	
	xy = 3*(x*x*x*x*x)+2*(x*x*x*x)-5*(x*x*x)-(x*x)+(7*x)-6;
	printf("x: %s",xy);
	
	return 0;
}
