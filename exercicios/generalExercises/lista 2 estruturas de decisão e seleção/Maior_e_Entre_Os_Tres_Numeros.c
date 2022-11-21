#include <stdio.h>
#include <stdlib.h>

/*
	1) Escreva um programa em C que leia três valores e apresente qual é o maior e qual é o menor.
*/

int main() {
	
	int num1, num2, num3, menor, maior;
	
	printf("insira tres valores inteiros.\n");
	scanf("%d%d%d",&num1 ,&num2 ,&num3);
	
	
	// calculo do menor numero, entre os 3.
	if(num1 < num2){
		if(num1 < num3){
			menor = num1;
		} else {
			menor = num3;
		}
	} else {
		if(num2 < num3){
			menor = num2;
		} else {
			menor = num3;
		}
	}
	
	
	// calculo do maior numero, entre os 3.
	if(num1 > num2){
		if(num1 > num3){
			maior = num1;
		} else {
			maior = num3;
		}
	} else {
		if(num2 > num3){
			maior = num2;
		} else {
			maior = num3;
		}
	}
	
	printf("\nMenor: %d\tMaior: %d\n",menor, maior);
	return 0;
}
