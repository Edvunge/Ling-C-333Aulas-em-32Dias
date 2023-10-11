#include <stdio.h>
#include <stdlib.h>
/*
5. Leia um número real e imprima a quinta parte deste número.
*/
int main(void){

    float num, quintaParteDeUmNumero;

    printf("\nDigite um valor real");
    scanf("%f",&num);

    quintaParteDeUmNumero = (num/5);
    printf("\nO valor da quinta parte de um numero e: %.2f",quintaParteDeUmNumero);
    return 0;
}