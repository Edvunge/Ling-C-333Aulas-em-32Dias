#include <stdio.h>
#include <stdlib.h>
/*
20. Leia um valor de massa em quilogramas e apresente-o convertido em libras. 
A fórmula K de conversão é: L = 0,45
, sendo K a massa em quilogramas e L a massa em libras.
*/
int main(void){
    float massaPorKilograma, conversorEmLibras;

    printf("\nDigite o valor em massa por kilograma ");
    scanf("%f",&massaPorKilograma);

    conversorEmLibras = (massaPorKilograma/0.45);
    printf("\nO valor convertido em libras %.2f",conversorEmLibras);
    return 0;
}