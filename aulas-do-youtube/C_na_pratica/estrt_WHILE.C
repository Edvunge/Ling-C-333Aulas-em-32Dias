#include <stdio.h>
#include <stdlib.h>

/* Estrutura While

utilizada incialmente quando não se sabe,
 o numero de vezes que o trecho de algoritmo ira ser repetida.

nesse caso, repetimos a estrutura enquanto uma determinada condicação é verdadeira

A condicação é baseada no estado do programa, ou seja no atual valor das diferentes variaveis que definem o programa.
*/

int main(void){
    float num = 0, soma = 0, media;
    int cont = 0;

    while (num >= 0) {
        printf("Informe o %dº valor: ", cont);
        scanf("%f", &num);

        if(num >= 0) {
            soma = soma + num;
            cont++;
        }
    }

    printf("soma: %.2f\n", soma);

    media = soma / cont;
    printf("o valor da media e: %.2f\n", media);
    
    return (0);
}
