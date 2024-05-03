#include <stdio.h>
#include <stdlib.h>

/*
	Aula 68: Estrutura de repetição DO { } WHILE (Faça enquanto)
*/

int main() {
	
		int i;
		
		//printf("Digite um valor maior que zero: ");
		//scanf("%d", &i);
		
		do{
			printf("Digite um valor maior que zero: ");
			scanf("%d",&i);
		}while(i <= 0);
	return 0;
}
