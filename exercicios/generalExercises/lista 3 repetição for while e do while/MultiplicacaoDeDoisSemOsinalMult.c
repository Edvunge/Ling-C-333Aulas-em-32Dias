#include <stdio.h>
#include <stdlib.h>

/*
	Aula 85: Exercicio: 15  
	15) fa�a um programa que pe�a ao usuario dois numeros inteiros e apresente o
	resultado na multiplica�ao entre os dois numeros sem utilizar a opera�ao de multiplica�ao.
*/

int main() {
	
		int i,a, b, r = 0;
		
		printf("digite dois valores:?");
		scanf("%d%d", &a, &b);
		
		for(i = 1; i <= a; i++){
			r += b;
		}
		printf("%d * %d = %d\n\n", a, b, r);
	return 0;
}
