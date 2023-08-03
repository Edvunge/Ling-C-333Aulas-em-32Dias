#include <stdio.h>
#include <stdlib.h>
/*
39. A importância de R$ 780.000,00 será dividida entre três ganhadores de um concurso.
Sendo que da quantia total:
    • O primeiro ganhador receberá 46%;
    • O segundo receberá 32%;
    • O terceiro receberá o restante;
Calcule e imprima a quantia ganha por cada um dos ganhadores.
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