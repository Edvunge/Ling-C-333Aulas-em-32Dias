#include <stdlib.h>
#include <stdio.h>

/*
9. Leia o salário de um trabalhador e o valor da prestação de um empréstimo. Se a
prestação for maior que 20% do salário imprima: Empréstimo nao concedido, caso
contrário imprima: Empréstimo concedido.
*/

int main(void){
	
	float   salario_funcionario, 
	        valor_da_prestacao,
		calculo_percentagem;
	
	printf("insira o valor do salario de um funcionario");
	scanf("%f",&salario_funcionario);
	
	printf("insira o valor do emprestimo");
	scanf("%f",&valor_da_prestacao);

	/*
	 * 35%
	 * x = 35*sal/100
	 * 
	 */
	calculo_percentagem  = (20 * salario_funcionario)/100;

	if(valor_da_prestacao > calculo_percentagem) {
		printf("emprestimo nao concedido");
	} else { 
		printf("emprestimo concedido");
	}

	return 0;
}


