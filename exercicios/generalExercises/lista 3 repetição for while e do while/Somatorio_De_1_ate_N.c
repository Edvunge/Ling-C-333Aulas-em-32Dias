#include <stdio.h>
#include <stdlib.h>

/*
	9) Faça um programa que calcule o valor de A, dado por:
	A = 1 + 2 + 3 + 4 + … + n, onde n é um número inteiro, maior que zero informado pelo usuário.
*/

int main() {
	
	int i, n, A = 0;  
	
	do {
		printf("\nDigite o valor de n:\n");
		scanf("%d",&n);
	
		for(i = 1; i <= n; i++){
			A = A + i;
			printf("Soma de 1 ate %d: %d\n\n", n, A);
		}
	} while (n <= 0);
	return 0;
}
