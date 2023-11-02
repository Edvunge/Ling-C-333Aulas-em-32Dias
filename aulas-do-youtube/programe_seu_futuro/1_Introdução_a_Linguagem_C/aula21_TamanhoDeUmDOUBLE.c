#include <stdio.h>
#include <stdlib.h>
/*
	Aula 20
	Tamanho de um float na memoria
	%f
*/
int main(void) {
	double x = 3.1415;
	
	printf("um double precisa de %d bytes de memoria.\n", sizeof x);
	return 0;
}
