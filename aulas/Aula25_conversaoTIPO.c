#include <stdio.h>
#include <stdlib.h>

/*
			Aula 25
			conversao de tipos 
*/

int main() {
	
	int a = 10, b = 20;
	float pi = 3.1415;
	
	a = (int)pi;
	
	printf("Valor de a: %d\n", a);
 	printf("\nSoma: %d\n", a + b);
 	printf("\nSubtra��o: %d\n", a - b);
 	printf("\nMultiplica��o: %d\n", a * b);
 	printf("\nDivis�o: %d\n", a / (float)b);
 	
	return 0;
}
