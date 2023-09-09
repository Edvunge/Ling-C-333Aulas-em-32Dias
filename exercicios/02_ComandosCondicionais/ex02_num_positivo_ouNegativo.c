#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
2. Leia um número fornecido pelo usuário. Se esse número for positivo, calcule a raiz
quadrada do número. Se o número for negativo, mostre uma mensagem dizendo que o
número é inválido.
*/

int main(void){
	
	int num;
	double raiz_quadrada = 0.0;	

	printf("digite um numero");
	scanf("%d",&num);

	if(num > 0){
		raiz_quadrada = sqrt(num);
		printf("o valor da raiz quadrada e de %f ",raiz_quadrada);
	} else {
		printf("numero invalido");
	}
	return 0;
}



