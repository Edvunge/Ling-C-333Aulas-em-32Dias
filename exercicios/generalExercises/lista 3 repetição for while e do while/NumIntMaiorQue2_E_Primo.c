#include <stdio.h>
#include <stdlib.h>
/*
	Fa�a um programa que pe�a ao usu�rio um n�mero inteiro maior que 2 e diga se o n�mero
	informado � primo ou n�o.
*/
int main() {
	
	int num;
		
	do {
		
	printf("\nInsira um numero:?");
	scanf("%d",&num);
		
		if(num % 2 == 0){
			printf("\nNumero Primo:");
		} else {
			printf("\nNumero Nao e Primo:?");
		}
		
	} while (num < 2);
	return 0;
}
