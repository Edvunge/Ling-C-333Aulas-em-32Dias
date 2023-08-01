#include <stdio.h>
#include <stdlib.h>
/*
23. Leia um valor de comprimento em metros e apresente-o convertido em jardas. 
A fórmula M de conversão é: J = 0,91
, sendo J o comprimento em jardas e M o comprimento em metros.
*/
int main(void){
    float comprimentosEmMetros, conversorDeJardas;

    printf("\nDigite o valor de comprimentos em metros");
    scanf("%f",&comprimentosEmMetros);
    
    conversorDeJardas = (comprimentosEmMetros/0.91);
    printf("\nO valor convertido em jardas e de %.2f",conversorDeJardas);
    return 0;
}