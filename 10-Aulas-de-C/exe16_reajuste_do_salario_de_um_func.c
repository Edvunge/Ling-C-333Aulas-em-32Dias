#include <stdlib.h>
#include <stdio.h>

/*
16. Faça um programa em C que calcule o reajuste do salário de um funcionário. Para
isso, o programa deverá ler o salário atual do funcionário e ler o percentual de
reajuste. Ao final imprimir o valor do novo salário.
*/

int main(void){
    double salarioActualDeUmFuncionario, percentualDoReajuste ,novoSalario;

    printf("\nDigite o salario atual de um funcionario: ");
    scanf("%lf",&salarioActualDeUmFuncionario);
    
    printf("\nDigite o valor da percentagem de reajuste: ");
    scanf("%lf",&percentualDoReajuste);

    percentualDoReajuste = (salarioActualDeUmFuncionario * percentualDoReajuste)/100;
    novoSalario          = (salarioActualDeUmFuncionario + percentualDoReajuste);

    printf("\nO valor do novo salario: %.2lf",novoSalario);
    return (0);
}