#include <stdio.h>

int main(void){
    int soma, sub, mult, div, percentagem;
    int num1 = 23, num2 = 20;
    

    soma = num1 + num2;
    sub = num1 - num2;
    mult = num1 * num2;
    div = num1 / num2;
    percentagem = num1 % 2;

    printf("\nSOMA: %d", soma);
    printf("\nMULTIPLICACAO: %d", mult);
    printf("\nDIVISAO: %d", div);
    printf("\nSUBTRACAO: %d", sub);
    printf("\nPERCENTAGEM: %d", percentagem);

    return (0);
}

