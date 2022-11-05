#include <stdio.h>
#include <stdlib.h>

/*
        24. Leia um valor de ´area em metros quadrados m2 e apresente-o convertido em acres. A
f ´ ormula de convers˜ao ´ e: A = M  0; 000247, sendo M a ´area em metros quadrados e A
a ´area em acres.
*/

int main() {

	float metrosQuadrados;
	
	printf("insira um valor em metros quadrados: ");
	scanf("%f",&metrosQuadrados);
	
	float acres = metrosQuadrados / 0.000247;
	printf("o resultado em acres sera de: %.3f", acres);
	
	return 0;
}
