#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/*
43. Escreva um programa de ajuda para vendedores. A partir de um valor total lido, mostre:
• o total a pagar com desconto de 10%;
• o valor de cada parcela, no parcelamento de 3× sem juros;
• a comissão do vendedor, no caso da venda ser a vista (5% sobre o valor com des-
conto)
• a comissão do vendedor, no caso da venda ser parcelada (5% sobre o valor total)
*/
int main(void){
    float valorTotal, desconto_porc, valor_com_desconto, valor_de_cada_parcela;
    float desconto_pagamento_a_vista, desconto_pagamento_a_parcela, valor_com_desconto_pagamento_a_vista;
    float valor_com_desconto_pagamento_a_parcela;
    bool venda_a_parcela = false; 

    printf("\nDigite o valor total");
    scanf("%f",&valorTotal);

    // calculo dos descontos gerais
    desconto_porc = ( valorTotal * 10 )/100;
    valor_com_desconto = valorTotal - desconto_porc;
    
    // calculo do valor da parcela
    valor_de_cada_parcela = (valorTotal / 3);
    
    // calculo do valor da comissao do vendedor, em caso de pagamento a vista 
    desconto_pagamento_a_vista = ( valorTotal * 5 )/100;
    valor_com_desconto_pagamento_a_vista = valor_com_desconto + desconto_pagamento_a_vista;

    // calculo do valor da comissao do vendedor, em caso de pagamento a parcela
    desconto_pagamento_a_parcela = ( valorTotal * 5 )/100;
    valor_com_desconto_pagamento_a_parcela = valorTotal + desconto_pagamento_a_parcela;

    if(venda_a_parcela == true){
        printf("\n5 sobre o valor com desconto a parcela e de%f",valor_com_desconto_pagamento_a_parcela);
    } else {
        printf("\n5 sobre o valor com desconto a vista e de%f",valor_com_desconto_pagamento_a_vista);
    }
    return 0;
}