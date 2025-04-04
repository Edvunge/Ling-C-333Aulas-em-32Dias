#include <stdio.h>
#include <stdlib.h>

/*
              5. Leia um numero real e imprima a quinta parte deste numero.
*/

int main() {

	float num;
	printf("insira um numero real: ");
	scanf("%f",&num);
	
	float quintaParte = num/5;
	printf("o resultado da quadrado e: %f",quintaParte);
	
	return 0;
}
