#include <stdio.h>
#include <stdlib.h>

/*
10) Você decidiu ficar rico guardando dinheiro por 30 dias consecutivos. 
Para tal, decidiu guardar 1
centavo no primeiro dia, 2 centavos no segundo dia, 
4 centavos no terceiro dia, 8 centavos no quarto
dia, e assim por diante. 
Faça um programa para calcular quanto você terá ao final dos 30 dias.
*/

int main(void) {
    int dias = 30;
    double dinheiro_guardado = 0.01; 

    for (int dia = 2; dia <= dias; dia++) {
        dinheiro_guardado *= 2; 
    }

    printf("Apos %d dias, voce tera %.2f dolares guardados.\n", dias, dinheiro_guardado);

    return 0;
}