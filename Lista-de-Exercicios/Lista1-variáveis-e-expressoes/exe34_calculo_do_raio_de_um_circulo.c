#include <stdlib.h>
#include <stdio.h>
/*
34. Leia o valor do raio de um cı́rculo e calcule e imprima a área do cı́rculo correspondente.
A área do cı́rculo é π ∗ raio2 , considere π = 3.141592.
*/
int main(void){
    float raioDeUmCirculo, areaDeUmCirculo;
    const float PI = 3.141592;

    printf("\nDigite o valor do raio de um circulo. ");
    scanf("%f",&raioDeUmCirculo);

    areaDeUmCirculo = ( PI * (raioDeUmCirculo * raioDeUmCirculo) );
    printf("\nO valor da area de um circulo e de %.2f",areaDeUmCirculo);
    return 0;
}