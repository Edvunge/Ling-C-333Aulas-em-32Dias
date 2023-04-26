#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int functionQuatroOperacoes(int a, int b, char operacao){
    int soma, sub, mult, div;

    switch (operacao){
    case '+':
        soma = a + b;
        return printf("O resultado da soma: %d",soma);
        break;
    case '-':
        sub = a - b;
        return printf("O resultado da subtraccao: %d",sub);
        break;
    case '*':
        mult = a * b;
        return printf("O resultado da multiplicacao: %d",mult);
        break;
    case '/':
        div = a / b;
        return printf("O resultado da divisao: %d",div);
        break;
    default:
        return printf("Operacoes Inseridas Incorretas.");
        break;
    }
}

int main(void){
    functionQuatroOperacoes(2 , 3 , '*');
    return 0;
}