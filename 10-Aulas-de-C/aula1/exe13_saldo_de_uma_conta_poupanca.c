#include <stdio.h>
#include <stdlib.h>

/*
13. Faça um programa em C que leia o saldo de uma conta poupança e imprima o
novo saldo, considerando um reajuste de 2%.
*/

int main(void){
    double contaPoupanca, reajuste = 2, novoSaldo;

    printf("\nDigite o saldo da conta poupanca.");
    scanf("%lf",&contaPoupanca);

    reajuste  = (contaPoupanca * reajuste)/100;
    novoSaldo = (contaPoupanca + reajuste);

    printf("\nO novo saldo: %lf",novoSaldo);
    return (0);
}
