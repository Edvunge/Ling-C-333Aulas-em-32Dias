#include <stdio.h>
#include <stdlib.h>

/*
3. Faça um programa que leia um número e imprima uma das duas mensagens: 
"É múltiplo de 3"ou "Não é múltiplo de 3".
*/

int main(void){
	
        int num;

	printf("\nDigite o valor de um numero");
	scanf("%d",&num);
	
	if(num % 3 == 0){
		printf("\nE multiplo de 3");
	} else {
		printf("\nNao e multiplo de 3");
	}

        return 0;
}

