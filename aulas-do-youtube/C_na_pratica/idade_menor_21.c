#include <stdlib.h>
#include <stdio.h>

/*
1. Solicitar a idade de varias pessoas e imprimir:
Total de pessoas com menos de 21 anos.
Total de pessoas com mais de 50 anos.
O programa termina quando for informada uma idade negativa.

// calculo de iddade negtiva 
if(idade >= 0){}
*/

int main(void){
    int idade, 
    totatlMenos21 = 0, 
    totatlMenos50 = 0;

    do {
       printf("\ninforme a idade: ");
       scanf("%d",&idade);

       if(idade >= 0) {
            if(idade < 21){
                totatlMenos21++;
            } else if( idade > 50){
                totatlMenos50++;
            }
       }     
    } while (idade >= 0);
    
    printf("total de pessoa com menos de 21 anos: %d\n",totatlMenos21);
    printf("total de pessoa com mais de 50 anos: %d\n",totatlMenos50);

    return (0);
}