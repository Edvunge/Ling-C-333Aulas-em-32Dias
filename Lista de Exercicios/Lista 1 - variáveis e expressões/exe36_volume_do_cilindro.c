#include <stdio.h>
#include <stdlib.h>
/*
36. Leia a altura e o raio de um cilindro circular e imprima o volume do cilindro. O volume
de um cilindro circular é calculado por meio da seguinte fórmula: V = π ∗ raio2 ∗ altura,
onde π = 3.141592.
*/
int main(void){
    float raio, altura, volumeDeUmCilindro;
    const float PI_ = 3.141592;

    printf("\nDigite o valor do raio.");
    scanf("%f",&raio);

    printf("\nDigite o valor da altura.");
    scanf("%f",&altura);

    volumeDeUmCilindro = ( PI_ * (raio * raio) * altura);
    
    printf("\nO valor do volume do cilindro e de %.3f",volumeDeUmCilindro);
    return 0;
}