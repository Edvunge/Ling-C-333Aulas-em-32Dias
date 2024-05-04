#include <stdio.h>

void main() {
	multiplicacao();
}

void multiplicacao(){
	int x = 5, y = 10, z = 14;

	float resultado = x*y*z;

	printf("Imprimindo o resultado da multiplicacao = %.2f\n",resultado);
}
