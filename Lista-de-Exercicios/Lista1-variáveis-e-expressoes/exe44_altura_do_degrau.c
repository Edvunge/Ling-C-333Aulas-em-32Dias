#include <stdio.h>
#include <stdlib.h>
/*
44. Receba a altura do degrau de uma escada e a altura que o usuário deseja alcançar
subindo a escada. Calcule e mostre quantos degraus o usuário deverá subir para atingir
seu objetivo.
*/
int main(void){
    int alturaDeUmDegrau, alturaDeUmDegrauDesejada, numeroDeDegraus;

    printf("\nDigite a altura do degrau da escada.");
    scanf("%d",&alturaDeUmDegrau);

    printf("\nDigite a altura do degrau desejada da escada.");
    scanf("%d",&alturaDeUmDegrauDesejada);

    numeroDeDegraus = alturaDeUmDegrau - alturaDeUmDegrauDesejada;

    printf("\nO usuario deve subir %d degraus.",numeroDeDegraus);
    return 0;
}