#include <stdio.h>
#include <stdlib.h>

/*
	Aula 67: Estrutura de repetição WHILE (enquanto)
*/

int main() {
	
		int i;
		
		printf("Digite um valor maior que zero: ");
		scanf("%d", &i);
		
		while(i <= 0){
			printf("Valor invalido! Digite um valor maior que zero: ");
			scanf("%d",&i);
		}
	return 0;
}
