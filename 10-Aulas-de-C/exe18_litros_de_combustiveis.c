#include <stdio.h>
#include <stdlib.h>

/*
18. Faça um programa em C que calcule a quantidade de litros de combustível con-
sumidos em uma viagem, sabendo-se que o carro tem autonomia de 12 km por
litro de combustível. O programa deverá ler o tempo decorrido na viagem e a
velocidade média e aplicar as fórmulas:

D = T ×V


L=D/12

Em que:
• D = Distância percorrida em horas
• T = Tempo decorrido
• V = Velocidade média
• L = Litros de combustível consumidos
Ao final, o programa deverá imprimir a distância percorrida e a quantidade de
litros consumidos na viagem.
*/

int main(void){
    double distanciaPercorrida, tempoDecorrido, velocidadeMedia, litrosCombustiveis;

    printf("\nTempo percorrido da viagem: ");
    scanf("%lf",&tempoDecorrido);

    printf("\nVelocidade Media: ");
    scanf("%lf",&velocidadeMedia);
    
    distanciaPercorrida = ( tempoDecorrido * velocidadeMedia );

    litrosCombustiveis = (distanciaPercorrida/12);

    printf("\nA distancia percorrida e de: %.2lf",distanciaPercorrida);
    printf("\nA quantidade de combistiveis: %.2lf",litrosCombustiveis);
    return (0);
}