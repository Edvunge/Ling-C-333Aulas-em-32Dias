#include <stdio.h>
#include <stdlib.h>

/*
13. Faça um programa em C que leia o saldo de uma conta poupança e 
imprima o novo saldo, considerando um reajuste de 2%.
*/

int main(void){
	double saldo, reajuste;
        
	printf("Digite o valor do seu saldo:");
	scanf("%lf",&saldo);

	reajuste = (saldo*2)/100;
	printf("\nO valor com o reajuste de 2%%: %.2lf",reajuste);
     return 0;
}

