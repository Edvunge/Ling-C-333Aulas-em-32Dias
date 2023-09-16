#include <stdio.h>
#include <stdlib.h>

/*
16. Faça um programa em C que calcule o reajuste do salário de um funcionário. Para
isso, o programa deverá ler o salário atual do funcionário e ler o percentual de
reajuste. Ao final imprimir o valor do novo salário.
*/

int main(void){

        double salario, reajuste;

	printf("\nDigite o valor do salario: ");
	scanf("%lf",&salario);

	printf("\nDigite o valor do reajuste: ");
        scanf("%lf",&reajuste);
	
	reajuste = (salario * reajuste)/100;

	printf("\n O valor do novo salario: %.3lf",reajuste);
        return 0;
}
