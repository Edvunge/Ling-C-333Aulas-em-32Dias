
#include <stdio.h>
#include <stdlib.h>

/*
2. Faça um programa em C que leia dois valores inteiros e efetue a adição. Caso o
valor somado seja maior que 20, este deverá ser apresentado somando-se a ele
mais 8, caso o valor somado seja menor ou igual a 20, este deverá ser apresentado
subtraindo-se 5.
*/

int main(void){

        int num1, num2, soma, soma2;

	printf("\nDigite o primeiro numero:");
	scanf("%d",&num1);

	printf("\nDigite o segundo numero:");
        scanf("%d",&num2);
	
	soma = num1 + num2;

	if(soma > 20){
		soma2 = soma + 8;
		if(soma2 <= 20){
			printf("\nO valor da soma e %d : %d ",soma ,soma2 - 5);
		}
	}
	return 0;
}

