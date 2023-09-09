#include <stdio.h>
#include<stdlib.h>

// 1. Faça um programa que receba dois números e mostre qual deles é o maior.

int main(void){
	
	int num1, num2;

	printf("digite um numero");
	scanf("%d",&num1);

	printf("digite um outro numero");
	scanf("%d",&num2);

	if(num1 > num2){
		printf("o numero %d e o maior",num1);
	} else {
		printf("o numero %d e o maior",num2);
	}
	return 0;
}



