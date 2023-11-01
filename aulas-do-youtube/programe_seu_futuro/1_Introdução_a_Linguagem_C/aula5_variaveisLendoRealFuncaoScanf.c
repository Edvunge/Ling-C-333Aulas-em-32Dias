#include <stdio.h>
#include <stdlib.h>

/* 
	Aula 5:
	variaveis 
	Lendo numeros reais.
*/
int main(void) {
	float dado;// criei uma variavel para guardar um valor do tipo real
	
	dado = 50.0f;
	
	printf("Digite um valor real: ");
	scanf("%f", &dado); 
	
	printf("valor da minha variavel: %.2f",dado);
	return 0;
}
