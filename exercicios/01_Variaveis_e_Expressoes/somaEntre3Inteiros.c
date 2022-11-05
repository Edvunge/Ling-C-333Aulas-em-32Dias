#include <stdio.h>
#include <stdlib.h>

/*
              3. Peca ao usuario para digitar tres valores inteiros e imprima a soma deles.
*/

int main() {

	int num1, num2, num3;
	printf("insira tres numeros inteiros: ");
	scanf("%d %d %d",&num1, &num2, &num3);
	
	int soma = num1 + num2 + num3;
	printf("o resultado da soma e: %d",soma);
	
	return 0;
}
