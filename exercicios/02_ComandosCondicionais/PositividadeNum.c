#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
2. Leia um numero fornecido pelo usuario. Se esse numero for positivo, calcule a raiz
quadrada do numero. Se o numero for negativo, mostre uma mensagem dizendo que o
numero e invalido.
*/

int main() {
	
	int num;
	
	printf("insira um numero inteiro:?\n");
	scanf("%d",&num);  
	
	if(num > 0){
		int raizQuadrd = sqrt(num);
		printf("O valor ao quadrado e: %d",raizQuadrd);
	} else {
		printf("O numero e invalido.");
	}
	return 0;
}
