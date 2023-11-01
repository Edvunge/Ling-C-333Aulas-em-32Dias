#include <stdio.h>
#include <stdlib.h>
/*
	Aula 16
	Operador Sizeof
	sizeof x ou sizeof(int)
*/
int main(void) {
	float x = 1.0;
	
	printf("Tamanho de um float na memoria: %d bytes\n", sizeof x);
	printf("Tamanho de um int na memoria: %d bytes\n", sizeof(int) );
	return 0;
}
