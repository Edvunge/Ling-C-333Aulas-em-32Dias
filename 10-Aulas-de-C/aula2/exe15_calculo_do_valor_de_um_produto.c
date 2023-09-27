#include <stdio.h>
#include <stdlib.h>

/*
15. Um comerciante comprou um produto e quer vendê-lo com um lucro de 45% se
o valor da compra for menor que R$20,00, caso contrário, o lucro será de 30%.
Faça um programa em C que leia o valor do produto e imprima o valor da venda.

y = (x * 4)/100;
x = x - y;
*/

int main(void){
    double valor_do_produto, valor_da_venda ,valor_final_da_venda;

    printf("\nDigite o Valor do produto: ");
    scanf("%lf",&valor_do_produto);

    if(valor_do_produto < 20.00){
         valor_da_venda = (valor_do_produto * 45)/100;
         valor_final_da_venda = valor_do_produto - valor_da_venda;

         printf("\no valor da venda %.2lf",valor_final_da_venda);
    } else {
         valor_da_venda = (valor_do_produto * 30)/100;
         valor_final_da_venda = valor_do_produto - valor_da_venda;

         printf("\no valor da venda %.2lf",valor_final_da_venda);
    }

    return (0);
}