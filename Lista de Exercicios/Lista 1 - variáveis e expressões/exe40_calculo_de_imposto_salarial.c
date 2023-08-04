#include <stdio.h>
#include <stdlib.h>
/*
40. Uma empresa contrata um encanador a R$ 30,00 por dia. Faça um programa que solicite
o número de dias trabalhados pelo encanador e imprima a quantia lı́quida que deverá ser
paga, sabendo-se que são descontados 8% para imposto de renda.
*/
int main(void){
    float valor_do_salario_por_dia, numero_de_dias_trabalhados, imposto_de_renda;
    float salario_liquido, salario_bruto;
    
    valor_do_salario_por_dia = 30.00;

    printf("\nDigite o numero de dias trabalhados no mes");
    scanf("%f",&numero_de_dias_trabalhados);
    
    // calculo de salario bruto
    salario_bruto = valor_do_salario_por_dia * numero_de_dias_trabalhados;

    // calculo do imposto de renda
    imposto_de_renda = (salario_bruto * 8)/100;

    // calculo de salario liquido
    salario_liquido = salario_bruto - imposto_de_renda;

    printf("\nO valor da quantia liquida e de: %.2f",salario_liquido);    
    return 0;
}