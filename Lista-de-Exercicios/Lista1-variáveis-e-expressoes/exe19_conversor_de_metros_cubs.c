#include <stdio.h>
#include <stdlib.h>
/*
19. Leia um valor de volume em litros e apresente-o convertido em metros cúbicos m3 . 
A L fórmula de conversão é: M = 1000 , sendo L o volume em litros e M o volume em metros
cúbicos.
*/
int main(void){
    float volumeEmLitros, conversorMetrosCubicos;

    printf("\nDigite o valor em volume em litros. ");
    scanf("%f",&volumeEmLitros);

    conversorMetrosCubicos = (volumeEmLitros/1000);
    printf("\nO valor convertido em metros cubicos %.2f",conversorMetrosCubicos);
    return 0;
}