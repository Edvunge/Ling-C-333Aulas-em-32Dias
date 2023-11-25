#include <stdio.h>
#include <stdlib.h>

/*
15.Criar um vetor A com 10 elementos inteiros. Desenvolver um programa
que defina o percentual de elementos pares e ímpares,
respectivamente, armazenados neste vetor.
*/
int main(void) {
    int vetA[10] = {90,21,12,98,77,46,64,52,54,58};
    int j, impar = 0, par = 0; 
    int percentualPar = 0, percentualImpar = 0;

    for(j = 0; j < 10; j++) {
        if (vetA[j] % 2 == 0) {
            percentualPar += vetA[j];
            par++;
        } else {
            percentualImpar += vetA[j];
            impar++; 
        }
    }

    printf("\nO valor do percentual par: %d ", percentualPar);
    printf("\nO valor do percentual impar: %d \n", percentualImpar);
    printf("\nO numeros de pares: %d \n", par);
    printf("\nO numeros de impares: %d \n", impar);
    return 0;
}
