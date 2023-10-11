#include <stdio.h>
#include <stdlib.h>
/*
18. Leia um valor de volume em metros cúbicos m3 e apresente-o convertido em litros. A
fórmula de conversão é: L = 1000 ∗ M , sendo L o volume em litros e M o volume em
metros cúbicos.
*/
int main(void){
    float volumeEmMetrosCubicos, conversorParaLitros;
    
    printf("\nDigite o valor em volume por metros cubicos");
    scanf("%f",&volumeEmMetrosCubicos);

    conversorParaLitros = (1000 * volumeEmMetrosCubicos);
    printf("\nConvertido para litros %.2f",conversorParaLitros);
    return 0;
}