#include <stdio.h>
#include <stdlib.h>

/*
	33. Leia o tamanho do lado de um quadrado e imprima como resultado a sua area.
*/

int main() {

	float lado;
	
	printf("indique o valor de lado quadrado:?");
	scanf("%f",&lado);
	
	float calcDaArea = (lado * lado * lado * lado);
	
	printf("o resultado do calculo de area: %.2f\n",calcDaArea);
	
	return 0;
}
