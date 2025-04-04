#include <stdio.h>
#include <stdlib.h>

/*
        12. Leia uma distancia em milhas e apresente-a convertida em quilometros. A formula de
			conversao e: K = 1; 61 M, sendo K a distancia em quilometros e M em milhas.
*/

int main() {

	float milhas;
	
	printf("insira um valor para milhas: ");
	scanf("%f",&milhas);
	
	float quilometrosPorHora = 1.61 * milhas;
	printf("o resultado dos quilometros sera de: %.3f",quilometrosPorHora);
	
	return 0;
}
