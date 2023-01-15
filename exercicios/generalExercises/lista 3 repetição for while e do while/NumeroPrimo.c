#include <stdio.h>
#include <stdlib.h>

/*
	Aula 82: Exercicio: 13  
	13) faça um programa que peça ao usuario um inteiro maior que 2 e 
	diga se o numero informado é primo ou não.
	
	1) Qual a definiçao de numero primo
*/

int main() {
	
		int i, valor, divisores = 0, opcao;
		do{
			do{
				printf("digite um valor maior que 1:  ");
				scanf("%d", &valor);
			}while(valor < 2);
		
			printf("Divisores de %d: ", valor);
			for(i = 1; i <= valor; i++){
				if(valor % i == 0) {
					printf("%d ", i);
					divisores++;
				}
			}
		
			printf("\n");
			if(divisores > 2){
				printf("%d nao e primo\n", valor);
			} else {
				printf("%d e primo\n", valor);
			}
		printf("1 - digitar outro valor\n2 - sair\n");
		scanf("%d", &opcao);
		} while(opcao != 2);	
		
	return 0;
}
