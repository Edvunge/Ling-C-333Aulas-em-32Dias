#include <stdio.h>
#include <stdlib.h>

/*
        25. Leia um valor de ´area em acres e apresente-o convertido em metros quadrados m2. A
f ´ ormula de convers˜ao ´ e: M = A  4048; 58, sendo M a ´area em metros quadrados e A a
´area em acres.
*/

int main() {

	float acres;
	
	printf("insira um valor em acres: ");
	scanf("%f",&acres);
	
	float metrosQuadrados = acres * 4048.58;
	printf("o resultado em metros Quadrados sera de: %.3f", metrosQuadrados);
	
	return 0;
}
