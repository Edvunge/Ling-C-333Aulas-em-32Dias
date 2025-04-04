#include <stdio.h>
#include <stdlib.h>

/*
        27. Leia um valor de ´area em hectares e apresente-o convertido em metros quadrados m2.
A f ´ ormula de convers˜ao ´ e: M = H  10000, sendo M a ´area em metros quadrados e H
a ´area em hectares.
*/

int main() {

	float hectares;
	
	printf("insira um valor em hectares: ");
	scanf("%f",&hectares);
	
	float  metrosQuadrados = hectares  * 10000;
	printf("o resultado em metrosQuadrados sera de: %.3f", metrosQuadrados);
	
	return 0;
}
