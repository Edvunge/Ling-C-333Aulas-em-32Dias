#include <stdio.h>
#include <stdlib.h>

/*
11. Faca um programa que preencha um vetor com 10 numeros reais, 
calcule e mostre a quantidade de numeros negativos 
e a soma dos numeros positivos desse vetor.
*/

int main(void) {
    const int LENTH = 5;
    float numrs[LENTH];
    float quantddNumersNeg = 0, somaNumrsPos = 0;


    for (int i = 0; i < LENTH; i++) {
        printf("liste os valores:  %d ", i);
        scanf("%f", &numrs[i]);
    }

    for ( int y = 0; y < LENTH; y++) {
        //printf(" %.2f ", numrs[y]);
        
        if (numrs[y] > 0) {
            quantddNumersNeg = quantddNumersNeg++; 
        } else {
            somaNumrsPos += somaNumrsPos;
        }
    }
    return (0);
}