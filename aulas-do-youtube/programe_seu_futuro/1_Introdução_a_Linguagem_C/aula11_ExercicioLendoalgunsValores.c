#include <stdio.h>
#include <stdlib.h>

/* 
	Aula 11:
	exercicio: Ler sexo, idade, peso e altura de um usuario.
*/
int main(void) {
	char  sexo;
	int   idade;
	float peso, 
	      altura;
	
	printf("Digite o seu sexo (M/F): ");
	sexo = getc(stdin); 
	
	printf("Digite a sua idade: ");
	scanf("%d",&idade);
	
	printf("Digite o seu peso: ");
	scanf("%f",&peso);
	
	printf("Digite a sua altura: ");
	scanf("%f",&altura);
	
	printf("O seu sexo: %c\n", sexo);
	printf("A sua idade: %d\n", idade);
	printf("O seu peso: %.2f\n", peso);
	printf("A sua altura: %.2f\n", altura);
	return 0;
}
