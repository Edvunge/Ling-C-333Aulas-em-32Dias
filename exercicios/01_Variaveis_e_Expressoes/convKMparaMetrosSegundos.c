#include <stdio.h>
#include <stdlib.h>

/*
        10. Leia uma velocidade em km/h (quilometros por hora) e apresente-a convertida em m/s
			(metros por segundo). A formula de conversao ´e: M = K=3:6, sendo K a velocidade em
				km/h e M em m/s.
*/

int main() {

	float quilometrosPorHora;
	
	printf("insira um valor para quilometros por hora: ");
	scanf("%f",&quilometrosPorHora);
	
	float metrosPorSegundo = quilometrosPorHora/3.6;
	printf("o resultado da velocidade em metros por segundo sera de: %f",metrosPorSegundo);
	
	return 0;
}
