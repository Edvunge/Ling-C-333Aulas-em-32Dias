#include <stdio.h>
#include <stdlib.h>
/*
51. Escreva um programa que leia as coordenadas x e y de pontos no R2 e calcule sua
distância da origem (0, 0).
---
distância = √((x - 0)^2 + (y - 0)^2) = √(x^2 + y^2)
*/
int main(void){

    float coordnd_X, coordnd_Y, ponto_R2, distancia_da_origem;

    printf("\nDigite coordenada X: ");
    scnaf("%f",&coordnd_X);

    printf("\nDigite coordenada Y: ");
    scnaf("%f",&coordnd_Y);

    distancia_da_origem = (  √( (coordenada_X - 0)*(coordenada_X - 0)) + (coordenada_Y - 0)*(coordenada_Y - 0) );

    return 0;
}