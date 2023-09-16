#include <stdio.h>
#include <stdlib.h>

/*
10. Faça um programa em C que leia três números inteiros e imprima os três em
ordem crescente.
*/

int main(void){

	int num1, num2, num3;
	
	printf("\nDigite o primeiro numero:");
	scanf("%d",&num1);

	printf("\nDigite o segundo numero:");
        scanf("%d",&num2); 

	printf("\nDigite o terceiro numero:");
        scanf("%d",&num3); 

	     if( (num1 > num2 && num1 > num3) && (num2 > num3) ){
			printf("\nNa ordem crescente %d , %d , %d",num3 ,num2 ,num1);
		} 
	     else 
		if( (num2 > num1 && num2 > num3) && (num1 > num3) ){
                	printf("\nNa ordem crescente %d , %d , %d",num3 ,num1 ,num2);
        	} 
	     else 
		if ( (num3 > num1 && num3 > num2) && (num2 > num1) ){
			printf("\nNa ordem crescente %d , %d , %d",num1 ,num2 ,num3);
        	} 
	     else {
			printf("\nSao iguais %d , %d , %d",num1 ,num2 ,num3);
        	}
        return 0;
}

