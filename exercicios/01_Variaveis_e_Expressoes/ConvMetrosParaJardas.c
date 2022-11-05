#include <stdio.h>
#include <stdlib.h>

/*
        23. Leia um valor de comprimento em metros e apresente-o convertido em jardas. A f ´ ormula
de convers˜ao ´ e: J = M
0;91 , sendo J o comprimento em jardas e M o comprimento em
metros.
*/

int main() {

	float metros;
	
	printf("insira um valor em metros: ");
	scanf("%f",&metros);
	
	float jardas = metros / 0.91;
	printf("o resultado em jardas sera de: %.3f", jardas);
	
	return 0;
}
