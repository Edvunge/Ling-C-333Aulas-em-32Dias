#include <stdio.h>
#include <stdlib.h>

/*
        22. Leia um valor de comprimento em jardas e apresente-o convertido em metros. A formula
			de conversao e: M = 0; 91  J, sendo J o comprimento em jardas e M o comprimento em metros.
*/

int main() {

	float jardas;
	
	printf("insira um valor em jardas: ");
	scanf("%f",&jardas);
	
	float metros = jardas * 0.91;
	printf("o resultado em metros sera de: %.3f", metros);
	
	return 0;
}
