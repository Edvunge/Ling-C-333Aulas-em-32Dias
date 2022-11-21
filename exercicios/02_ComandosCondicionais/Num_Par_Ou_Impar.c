#include <stdio.h>
#include <stdlib.h>


/*
5. Faca um programa que receba um numero inteiro e verifique se este numero e par ou Impar.
*/

int main() {
	
	int num;
	
	printf("insira um numero inteiro:?\n");
	scanf("%d",&num);  
	
	if(num % 2 == 0){
		printf("\nO %d e um numero par: ",num);
	} else {
		printf("o %d e um numero Impar.",num);
	}
	return 0;
}
