#include <stdio.h>
#include <stdlib.h>

/*
        Leia uma dist ˆancia em quil ˆometros e apresente-a convertida em milhas. A f ´ ormula de
convers˜ao ´ e: M = K
1;61 , sendo K a dist ˆancia em quil ˆometros e M em milhas.
*/

int main() {

	float quilometrosPorHora;
	
	printf("insira um valor para quilometros Por Hora: ");
	scanf("%f",&quilometrosPorHora);
	
	float milhas = 1.61 / quilometrosPorHora;
	printf("o resultado em milhas sera de: %.3f",milhas);
	
	return 0;
}
