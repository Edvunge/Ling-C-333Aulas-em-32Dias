#include <stdio.h>
#include <stdlib.h>

/*
        18. Leia um valor de volume em metros c´ubicos m3 e apresente-o convertido em litros. A
f ´ ormula de convers˜ao ´ e: L = 1000  M, sendo L o volume em litros e M o volume em
metros c´ubicos.
*/

int main() {

	float metrosCubicos;
	
	printf("insira um valor metros Cubicos: ");
	scanf("%f",&metrosCubicos);
	
	float litros = 1000 * metrosCubicos;
	printf("o resultado em litros sera de: %.3f", litros);
	
	return 0;
}
