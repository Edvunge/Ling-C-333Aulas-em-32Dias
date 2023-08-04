#include <stdio.h>
#include <stdlib.h>
/*
41. Faça um programa que leia o valor da hora de trabalho (em reais) e número de horas
trabalhadas no mês. Imprima o valor a ser pago ao funcionário, adicionando 10% sobre
o valor calculado.
*/
int main(void){
    float horas_trabalhadas, horas_trabalhadas_no_mes, salario_do_funcionario, aumento;

    printf("\nDigite o numero de horas de trabalho e de.");
    scanf("%f",&horas_trabalhadas);

    printf("\nDigite horas trabalhadas.");
    scanf("%f",&horas_trabalhadas_no_mes);

    salario_do_funcionario = horas_trabalhadas * horas_trabalhadas;
    aumento = (salario_do_funcionario * 10)/100;
    salario_do_funcionario = salario_do_funcionario + aumento;

    printf("\nO valor a ser pago no funcionario e de %.3f",salario_do_funcionario);
    return 0;
}