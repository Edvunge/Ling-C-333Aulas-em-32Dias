#include <stdio.h>
#include <stdlib.h>

/*
6. A prefeitura do Rio de Janeiro abriu uma linha de crédito para os funcionários
estatutários. O valor máximo da prestação não poderá ultrapassar 30% do salário
bruto. Faça um programa em linguagem C que permita entrar com o salário bruto
e o valor da prestação e informar se o empréstimo pode ou não ser concedido.
*/

int main(void){
	double salarioBruto, valorDaPrestacao, percentagem;

	printf("\n Digite o valor do seu salario bruto");
	scanf("%lf",&salarioBruto);

	printf("\n Digite o valor do emprestimo");
	scanf("%lf",&valorDaPrestacao);

	percentagem = (30 * salarioBruto)/100;

	if(valorDaPrestacao > percentagem){
		printf("\nValor maximo maior que a prestacao.");
	} else {
		printf("\nValor aceitavel para o credito.");
	}
	return (0);
}


