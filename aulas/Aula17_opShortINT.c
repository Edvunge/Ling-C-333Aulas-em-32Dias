#include <stdio.h>
#include <stdlib.h>

/*
			Aula 17
			Operador short int 
			intervalo: -32.768 até  32.767
			%hi ou  %d
*/

int main() {
	
	int y = 0;
	short int x = 32767;
	
	printf("tamanho de um int na memoria: %d bytes\n", sizeof y);
 	printf("tamanho em memoria de short int: %d bytes\n", sizeof x);
 	
	return 0;
}
