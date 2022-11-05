#include <stdio.h>
#include <stdlib.h>

/*
        Leia um valor de ´area em metros quadrados m2 e apresente-o convertido em hectares.
A f ´ ormula de convers˜ao ´ e: H = M  0; 0001, sendo M a ´area em metros quadrados e H
a ´area em hectares.
*/

int main() {

	float metrosQuadrados;
	
	printf("insira um valor em metrosQuadrados: ");
	scanf("%f",&metrosQuadrados);
	
	float  hectares = metrosQuadrados  * 0.0001;
	printf("o resultado em hectares sera de: %.3f", hectares);
	
	return 0;
}
