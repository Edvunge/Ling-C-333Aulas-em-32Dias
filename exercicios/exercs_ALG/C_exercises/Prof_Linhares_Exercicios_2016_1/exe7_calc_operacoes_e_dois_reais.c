#include <stdio.h>
#include <stdlib.h>

/*
7. Fazer um programa que recebe um símbolo de operação do usuário (+, -, / ou *) e dois
números reais. O programa deve retornar o resultado da operação recebida sobre estes dois
números.
*/

int main(void){
    double num1, num2, soma; 
    char operacao;
    double div, sub, mult;

    printf("\nDigite a operacao desejada: \n\t( soma: + , sutraccao: - , multiplicacao: * , divisao: / ) ");
    scanf("%c",&operacao);

    switch(operacao){
    case '+':
        printf("\nDigite o primeiro numero:");
        scanf("%lf",&num1);

        printf("\nDigite o segundo numero:");
        scanf("%lf",&num2);

        soma = num1 + num2;
        printf("\nA soma de %.1lf +  %.1lf = %.1lf",num1 ,num2 ,soma);
        break;
    case '-':
        printf("\nDigite o primeiro numero:");
        scanf("%lf",&num1);

        printf("\nDigite o segundo numero:");
        scanf("%lf",&num2);

        sub = num1 - num2;
        printf("\nA subtraccao de %.1lf - %.1lf = %.1lf",num1 ,num2 ,sub);
        break;
    case '*':
        printf("\nDigite o primeiro numero:");
        scanf("%lf",&num1);

        printf("\nDigite o segundo numero:");
        scanf("%lf",&num2);

        mult = num1 * num2;
        printf("\nA multiplicacao de %.1lf * %.1lf = %.1lf",num1 ,num2 ,mult);
        break;
    case '/':
        printf("\nDigite o primeiro numero:");
        scanf("%lf",&num1);

        printf("\nDigite o segundo numero:");
        scanf("%lf",&num2);

        div = num1 / num2;
        printf("\nA div de %.1lf / %.1lf = %.1lf",num1 ,num2 ,div);
        break;
    default:
        break;
    }
    return (0);
}