#include <stdio.h>
#include <stdlib.h>

/*
        Leia um valor de comprimento em polegadas e apresente-o convertido em centýmetros.
			A formula de conversao e: C = P  2; 54, sendo C o comprimento em cent´ýmetros e P o
				comprimento em polegadas.
*/

int main() {

	float comprimentoEmPolegadas;
	
	printf("insira um valor comprimento em polegadas: ");
	scanf("%f",&comprimentoEmPolegadas);
	
	float centimetros = comprimentoEmPolegadas * 2.54;
	printf("o resultado em centimetros sera de: %.3f", centimetros);
	
	return 0;
}
