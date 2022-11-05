#include <stdio.h>
#include <stdlib.h>

/*
        20. Leia um valor de massa em quilogramas e apresente-o convertido em libras. A f ´ ormula
de convers˜ao ´ e: L = K
0;45 , sendo K a massa em quilogramas e L a massa em libras.
*/

int main() {

	float massaEmQuilogramas;
	
	printf("insira um valor em massa Em Quilogramas: ");
	scanf("%f",&massaEmQuilogramas);
	
	float libras = massaEmQuilogramas / 0.45;
	printf("o resultado em libras sera de: %.3f", libras);
	
	return 0;
}
