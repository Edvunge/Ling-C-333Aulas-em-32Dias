#include <stdio.h>
#include <stdlib.h>

/*
        17. Leia um valor de comprimento em cent´ýmetros e apresente-o convertido em polegadas.
			A formula de conversao e: P = C
				2;54 , sendo C o comprimento em cent´ýmetros e P o
					comprimento em polegadas.
*/

int main() {

	float centimetros;
	
	printf("insira um valor centimetros: ");
	scanf("%f",&centimetros);
	
	float polegadas = centimetros / 2.54;
	printf("o resultado em polegadas sera de: %.3f", polegadas);
	
	return 0;
}
