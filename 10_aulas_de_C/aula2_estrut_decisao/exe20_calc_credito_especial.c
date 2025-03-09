#include <stdio.h>
#include <stdlib.h>

/*
20. O banco zebra concederá um crédito especial com juros de 2% aos seus clientes
de acordo com o saldo médio no último ano. Faça um programa que leia o saldo
médio de um cliente e calcule o valor do crédito de acordo com a tabela a seguir.
O programa deve imprimir uma mensagem informando o saldo médio e o valor
de crédito.

Saldo Médio     |  =========================================  |   Percentual
de 0 a 500      |  -----------------------------------------  |   nenhum crédito
de 501 a 1000   |  -----------------------------------------  |   30% do valor do saldo médio
de 1001 a 3000  |  -----------------------------------------  |   40% do valor do saldo médio
acima de 3001   |  -----------------------------------------  |   50% do valor do saldo médio
*/

int main(void){
    double saldoMedio, valor_do_credito;

    printf("\nDigite o saldo medio de um cliente: ");
    scanf("%lf",&saldoMedio);

    if(saldoMedio > 0 && saldoMedio < 500) {
        printf("\nNenhum crédito");
    } else if(saldoMedio > 501 && saldoMedio < 1000) {
        
        valor_do_credito = (saldoMedio * 30)/100;
        valor_do_credito = saldoMedio - valor_do_credito;

        printf("\n%.2lf e 30%% do valor do saldo médio",valor_do_credito);

    } else if(saldoMedio > 1001 && saldoMedio < 3000) {

        valor_do_credito = (saldoMedio * 40)/100;
        valor_do_credito = saldoMedio - valor_do_credito;

        printf("\n%.2lf e 30%% do valor do saldo médio",valor_do_credito);

    } else if(saldoMedio < 3001) {

        valor_do_credito = (saldoMedio * 50)/100;
        valor_do_credito = saldoMedio - valor_do_credito;

        printf("\n%.2lf e 30%% do valor do saldo médio",valor_do_credito);

    }

    return (0);
}