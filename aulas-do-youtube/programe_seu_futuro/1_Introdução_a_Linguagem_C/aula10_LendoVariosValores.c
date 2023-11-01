#include <stdio.h>
#include <stdlib.h>

/* 
	Aula 10: 
	Lendo Varios valores do teclado.
	função scanf();
*/
int main(void) {
	int num1, num2, num3;
	
	printf("Digite tres valores inteiros: ");
	scanf("%d%d%d", &num1, &num2, &num3);
	
	printf("Valores Lidos: %d, %d e %d\n", num1, num2, num3);
	return 0;
}
