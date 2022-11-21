#include <stdio.h>
#include <stdlib.h>

/*
	10) Você decidiu ficar rico guardando dinheiro por 30 dias consecutivos. Para tal, decidiu guardar 1
	centavo no primeiro dia, 2 centavos no segundo dia, 4 centavos no terceiro dia, 8 centavos no quarto
	dia, e assim por diante. Faça um programa para calcular quanto você terá ao final dos 30 dias.
*/

int main() {
	
	int i, a = 1, z = 1;  
	
	for(i = 1; i <= 29; i++){
		a = z * 2;
		z += a;
	}
	printf("calor em centavos: %d\n", z);
	printf("R$%.2f\n\n", z / 100.0);
	return 0;
}
