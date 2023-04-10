#include <stdio.h>
#include <stdlib.h>
/*
Intermediário 21. Um posto está vendendo combustíveis com a seguinte tabela de descontos:   


Álcool:

Até 20 litros: desconto de 3% por litro
Acima de 20 litros: Desconto de 5% por litro 99.

1 litro 3%
n litro x 3 / 100

Gasolina:
Até 20 litros: desconto de 4% por litro
Acima de 20 litros, desconto de 6% por litro
Escreva um algoritmo que leia o número de litros vendidos, 
o tipo de combustível (codificado da seguinte forma: A-álcool. G-gasolina), calcule e imprima o valor a ser pago pelo cliente.  
*/

int main(){
    float litrosVendidos;
    char tipoCombst;

    printf("Quantos litros de combustiveis vais comprar:?");
    scanf("%f",&litrosVendidos);

    printf("\nQual e o tipo de combustivel que vais comprar:  \n");
    printf("\n A-álcool. G-gasolina");
    scanf("%s",&tipoCombst);

    if(tipoCombst == 'A'){
        if(litrosVendidos < 20){

        }
    } else if (tipoCombst == 'G'){
        // gdgdgdgdggdgdg
    } else {
        printf("Tipo definido esta invalido.");
    }

    return 0;
}