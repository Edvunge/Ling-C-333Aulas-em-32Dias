#include <stdio.h>
#include <stdlib.h>

/*
        Leia um valor de massa em libras e apresente-o convertido em quilogramas. A f ´ ormula
de convers˜ao ´ e: K = L 0; 45, sendo K a massa em quilogramas e L a massa em libras.
*/

int main() {

	float libras;
	
	printf("insira um valor em libras: ");
	scanf("%f",&libras);
	
	float massaEmQuilogramas = libras * 0.45;
	printf("o resultado em massa Em Quilogramas sera de: %.3f", massaEmQuilogramas);
	
	return 0;
}
