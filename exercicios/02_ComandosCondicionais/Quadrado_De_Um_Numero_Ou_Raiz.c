#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
3. Leia um numero real. Se o numero for positivo imprima a raiz quadrada. 
Do contrario, imprima o numero ao quadrado.
*/

int main() {
	
	float num;
	
	printf("insira um numero inteiro:?\n");
	scanf("%f",&num);  
	
	if(num > 0){
		float raizQuadrd = sqrt(num);
		printf("O valor ao quadrado e: %.2f",raizQuadrd);
	} else {
		printf("O numero ao quadrado: %.2f", num*num);
	}
	return 0;
}
