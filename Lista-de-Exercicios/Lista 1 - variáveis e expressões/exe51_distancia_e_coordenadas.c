#include <stdio.h>
#include <math.h>
/*
51. Escreva um programa que leia as coordenadas x e y de pontos no R2 e calcule sua
distância da origem (0, 0).
*/
int main() {
    float x, y;

    printf("Digite as coordenadas x e y: ");
    scanf("%f %f", &x, &y);

    float distancia = sqrt(x * x + y * y);

    printf("Distância da origem: %.2f\n", distancia);

    return 0;
}
