#include <stdio.h>
#include <stdlib.h>

/*
9. Leia o salario de um trabalhador e o valor da prestacao de um emprestimo. 
Se a prestacao for maior que 20% do salario imprima: Emprestimo nao concedido, caso
contrario imprima: Emprestimo concedido.
*/

int main() {
	
	float salario, prestacao, taxa, valorTaxa = 0;
	
	printf("insira o valor do seu salario:?\n");
	scanf("%f",&salario);
	
	printf("insira o valor da prestacao:?\n");
	scanf("%f",&prestacao); 
	
	taxa = (salario * 20 / 100);
	valorTaxa = salario + taxa;
	
	if( prestacao > valorTaxa ){
		printf("Emprestimo nao concedido");
	} else {
		printf("Emprestimo concedido.");
	}
	return 0;
}
