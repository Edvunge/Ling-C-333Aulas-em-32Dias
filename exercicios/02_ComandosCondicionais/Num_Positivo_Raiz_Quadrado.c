#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
4. Faca um programa que leia um numero e, caso ele seja positivo, calcule e mostre:
	 O numero digitado ao quadrado
	 A raiz quadrada do numero digitado
*/

int main() {
	
	float num;
	
	printf("insira um numero inteiro:?\n");
	scanf("%f",&num);  
	
	if(num > 0){
		printf("\nO numero ao quadrado: %.2f\n", num*num);
		
		float raizQuadrd = sqrt(num);
		printf("\nO valor ao quadrado e: %.2f\n",raizQuadrd);
	} 
	return 0;
}
