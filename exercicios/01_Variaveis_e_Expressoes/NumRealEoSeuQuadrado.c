#include <stdio.h>
#include <stdlib.h>

/*
              // 4. Leia um numero real e imprima o resultado do quadrado desse numero.
*/

int main() {

	float num;
	printf("insira um numero real: ");
	scanf("%f",&num);
	
	float quadradoNum = num*num;
	printf("o resultado da quadrado e: %f",quadradoNum);
	
	return 0;
}
