#include <stdio.h>
#include <stdlib.h>

/*
20.Implementar um programa que obtenha a cotação do dólar (U$) em
relação ao real (R$) e a seguir armazene em vetor A com 20
elementos as seguintes conversões:

    * A[i] = cotação do dolar * i, para todo i variando de 1 até 20.
*/

int main(void) {
    int cotacaoDoDolar = 0, cotacaoDoReal = 0;
    int vet_A[20]={2,4,5,6,7,8,9,10,3,11,12,14,15,16,17,18,19,1,13,4};

    /*
    creal = 7 * cdolar;
    */     
    for (int i = 1; i < 20; i++) { 
        vet_A[i] = cotacaoDoDolar * i;
    }

    return (0);
}