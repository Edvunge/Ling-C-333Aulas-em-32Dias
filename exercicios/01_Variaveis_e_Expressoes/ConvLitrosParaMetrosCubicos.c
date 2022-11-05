#include <stdio.h>
#include <stdlib.h>

/*
        19. Leia um valor de volume em litros e apresente-o convertido em metros c´ubicos m3. A
f ´ ormula de convers˜ao ´ e: M = L
1000 , sendo L o volume em litros e M o volume em metros
c´ubicos.
*/

int main() {

	float litros;
	
	printf("insira um valor em litros: ");
	scanf("%f",&litros);
	
	float metrosCubicos = litros / 1000;
	printf("o resultado em metros cubicos sera de: %.3f", metrosCubicos);
	
	return 0;
}
