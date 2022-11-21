#include <stdio.h>
#include <stdlib.h>

/*
	Aula 66: incremento diferente de 1
*/

int main() {
	
		int i;
		
		// for (condição de inicio; condição de parada; incremento)
		// numero impares
		for(i = 1; i <= 20; i+=2){
			printf("%d\n",i);
		}
		printf("\n\t//Abaixo tempos, apenas multiplos de 5");
		// apenas mutiplos de 5.
		for(i = 5; i <= 100; i+=5){
			printf("\n\t%d ", i);
		}
	return 0;
}
