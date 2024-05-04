#include <stdio.h>

void main() {

	int x = 10;
	int y = 20;
	int resultado;

	resultado = subtracao(x,y);
	printf("O resultado e: %d\n", resultado);
}

int subtracao(int num1, int num2) {
	return num2 - num1;
}
