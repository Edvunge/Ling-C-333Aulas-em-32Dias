#include <stdio.h>
#include <stdlib.h>
/*
42. Receba o salário-base de um funcionário. Calcule e imprima o salário a receber, sabendo-
se que esse funcionário tem uma gratificação de 5% sobre o salário-base. Além disso,
ele paga 7% de imposto sobre o salário-base.
*/
int main(void){
    float imposto, horas_trabalhadas, horas_trabalhadas_no_mes, salario_do_funcionario, aumento ,salario_liquido;

    printf("\nDigite o numero de horas de trabalho e de.");
    scanf("%f",&horas_trabalhadas);

    printf("\nDigite horas trabalhadas.");
    scanf("%f",&horas_trabalhadas_no_mes);

    salario_do_funcionario = horas_trabalhadas * horas_trabalhadas;
    aumento = (salario_do_funcionario * 5)/100;
    salario_do_funcionario = salario_do_funcionario + aumento;

    imposto = (salario_do_funcionario * 7)/100;
    salario_liquido = salario_do_funcionario - imposto;
    printf("\nO salario do funcionario e de %.3f",salario_liquido);
    return 0;
}