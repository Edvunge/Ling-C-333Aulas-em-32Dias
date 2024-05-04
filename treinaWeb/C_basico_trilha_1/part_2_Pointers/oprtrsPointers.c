#include <stdio.h>


void main(){

	int numero = 10;
	int *ponteiro = &numero;

	printf("O endereco de memoria eh %p\n",ponteiro);
}
