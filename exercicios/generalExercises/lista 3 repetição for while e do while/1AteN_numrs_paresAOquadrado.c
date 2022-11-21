#include <stdio.h>
#include <stdlib.h>

/*
	7) Leia um valor inteiro N. Apresente o quadrado de cada um dos valores pares, de 1 até N,
	inclusive N, se for o caso.
*/

int main() {
	
	int i, n;  
	
	printf("\nDigite um valor inteiro:\n");
	scanf("%d",&n);
	
	for(i = 2; i <= n; i++){
		if(i % 2 == 0){	
			printf("%d ",i*i);
		}
	}
	return 0;
}
