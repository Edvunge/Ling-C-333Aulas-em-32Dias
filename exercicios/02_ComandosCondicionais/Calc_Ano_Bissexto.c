#include <stdio.h>
#include <stdlib.h>

/*
	23. Determine se um determinado ano lido e bissexto. Sendo que um ano e bissexto se
	for divisivel por 400 ou se for divisivel por 4 e nao for divisivel por 100. Por exemplo:
	1988, 1992, 1996
*/

int main() {
	
	int ano;
	
	printf("insira um ano:?\n");
	scanf("%d",&ano);
	
	if(  (ano % 100 != 0) && (ano % 4 == 0) || (ano % 400 == 0)  ){
		printf("\nE um ano Bissexto.");
	} else {
		printf("\nNao E um ano Bissexto.");
	}
	return 0;
}
