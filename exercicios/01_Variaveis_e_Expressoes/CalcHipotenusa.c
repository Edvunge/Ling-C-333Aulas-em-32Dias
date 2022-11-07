#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
	35. Sejam a e b os catetos de um triangulo, onde a hipotenusa e obtida pela equacao:
		hipotenusa = p a2 + b2. Fac¸a um programa que receba os valores de a e b e calcule
		o valor da hipotenusa atraves da equacao. Imprima o resultado dessa operacao.
*/

int main() {

	float catetoA;
	float catetoB;
	
	printf("indique o valor para o cateto A:?");
	scanf("%f",&catetoA);
	
	printf("indique o valor para o cateto B:?");
	scanf("%f",&catetoB);
	
	float hipotenusa = sqrt( ( (catetoA)*(catetoA) + (catetoB)*(catetoB) ) );
	
	printf("o resultado da hipotenusa é: %.2f\n",hipotenusa);
	return 0;
}
