#include <stdio.h>
#include <stdlib.h>

/*
	Aula 82: Exercicio: 13  
	13) fa�a um programa que pe�a ao usuario um inteiro maior que 2 e 
	diga se o numero informado � primo ou n�o.
	
	1) Qual a defini�ao de numero primo
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
