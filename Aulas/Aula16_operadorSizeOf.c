#include <stdio.h>
#include <stdlib.h>

/*
			Aula 16
			Operador sizeOf
			sizeof  X  ou sizeof(int)
*/

int main() {
	
	float x = 1.0;
	
	printf("tamanho de um float na memoria: %d bytes\n", sizeof x);
 	printf("tamanho em memoria de int: %d bytes\n", sizeof(int));
 	
	return 0;
}
