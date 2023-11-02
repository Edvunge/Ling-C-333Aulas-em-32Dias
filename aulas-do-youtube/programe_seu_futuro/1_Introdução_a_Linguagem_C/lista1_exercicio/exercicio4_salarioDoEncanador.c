#include <stdio.h>
#include <stdlib.h>

/*
5) Uma empresa contrata um encanador a R$ 45,00 por dia. 
Faça um programa que solicite o
número de dias trabalhados pelo encanador e 
imprima a quantia líquida que deverá ser paga,
sabendo que são descontados 8% para imposto de renda.
*/

int main(void) {

    float valorPagoPorDia = 45.00, quantiaLiquida, salario;
    int numeroDeDiasTrabalhados;

    printf("Digite o numero de dias trabalhados: \n");
    scanf("%d",&numeroDeDiasTrabalhados);

    salario = (valorPagoPorDia*numeroDeDiasTrabalhados);

     quantiaLiquida = (salario * 8)/100;
     quantiaLiquida = salario + quantiaLiquida;
	
	printf("O valor da quantia Liquida e de: %.2f\n",quantiaLiquida);
    return 0;
}