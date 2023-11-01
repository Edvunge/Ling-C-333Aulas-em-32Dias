#include <stdio.h>
#include <stdlib.h>
/*
	Aula 17
	Operador Short para o tipo int
	intrvalo: -32.768 até 32.767
	%hi ou %d
*/
int main(void) {
	int y = 0;
	short int x = 32767;
	
	printf("Tamanho de um float na memoria: %d bytes\n", sizeof y);
	printf("Tamanho de memoria de short int: %d bytes\n", sizeof x );
	return 0;
}
