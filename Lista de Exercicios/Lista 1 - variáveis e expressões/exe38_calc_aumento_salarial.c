#include <stdio.h>
#include <stdlib.h>
/*
38. Leia o salário de um funcionário. Calcule e imprima o valor do novo salário, sabendo que
ele recebeu um aumento de 25%.
*/
int main(void){
    float salarioDeUmFuncionario, aumento = 25, valorDoAumentoSalarial;

    printf("\nDigite o valor do salario de um funcionario.");
    scanf("%f",&salarioDeUmFuncionario);

    valorDoAumentoSalarial = (salarioDeUmFuncionario * aumento ) / 100;
    valorDoAumentoSalarial = salarioDeUmFuncionario + valorDoAumentoSalarial;

    printf("\nO valor do salario actualizado e de %.2f.",valorDoAumentoSalarial);
    return 0;
}