#include <stdio.h>
#include <stdlib.h>
/*
30. Leia um valor em real e a cotação do dólar. 
Em seguida, imprima o valor correspondente em dólares.
*/
int main(void){
    float nota, cotacaoDolar, valorCotado;

    printf("\nDigite o valor da nota.");
    scanf("%f",&nota);

    cotacaoDolar = 1.78;    
    valorCotado = (cotacaoDolar * nota);

    printf("\nO valor cotado e de: %.2f",valorCotado);
    return 0;
}