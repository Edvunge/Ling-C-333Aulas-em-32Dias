#include <stdio.h>
#include <stdlib.h>

/*
	1. Faca um programa que receba dois numeros e mostre qual deles e o maior.
*/

int main() {
	
	int num1, num2;
	
	printf("insira dois numeros inteiros:?\n");
	scanf("%d%d",&num1,&num2);  
	
	if(num1 > num2){
		printf("o maior e: %d",num1);
	} else {
		printf("o maior e: %d",num2);
	}
	return 0;
}
