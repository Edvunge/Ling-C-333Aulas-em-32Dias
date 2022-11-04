#include <stdio.h>
#include <stdlib.h>

/*
              Aula 05
        lendo numeros reais
*/

int main() {

	// tipo nome;
	float numero = 3.1415;
 	
 	printf("valor da minha variavel: %.4f\n", numero);
 	
 	
 	float numero2;
 	printf("digite um valor real:");
 	scanf("%f", &numero2);
 	
	printf("\no valor e: %.2f \n" , numero2);
	return 0;
}
