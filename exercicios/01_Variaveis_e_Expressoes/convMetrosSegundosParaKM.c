#include <stdio.h>
#include <stdlib.h>

/*
        Leia uma velocidade em m/s (metros por segundo) e apresente-a convertida em km/h
			(quilometros por hora). A formula de conversao ´e: K = M  3:6, sendo K a velocidad
			
				em km/h e M em m/s.
*/

int main() {

	float metrosPorSegundo;
	
	printf("insira um valor para metros Por Segundo: ");
	scanf("%f",&metrosPorSegundo);
	
	float quilometrosPorHora = metrosPorSegundo * 3.6;
	printf("o resultado da velocidade em quilometros Por Hora sera de: %.3f",quilometrosPorHora);
	
	return 0;
}
