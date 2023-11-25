#include <stdio.h>
#include <stdlib.h>

/*
16.Criar um vetor A com 10 elementos inteiros. Escrever um programa
que calcule e escreva: 
    
    a) a soma de elementos armazenados neste
    vetor que são inferiores a 15; 
    
    b) a quantidade de elementos
    armazenados no vetor que são iguais a 15; e 

    c) a média dos elementos armazenados no 
    vetor que são superiores a 15.
*/
int main(void) {
    int vetA[10] = {90,21,12,98,77,46,64,52,15,58};
    int j, somaDosElementos = 0; 
    int qtdadElementsIguais = 0, count = 0;
    float media;

    for(j = 0; j < 10; j++) {
        if (vetA[j] < 15) {
            somaDosElementos += vetA[j];
        } else if(vetA[j] == 15) {
            qtdadElementsIguais++;
        } else if(vetA[j] > 15) {
            media += vetA[j];            
        }
    }
    
    if (count > 0) {
        media /= count;
        printf("\nO valor da media: %.2f ", media);
    }

    printf("\nSoma elemnts inferiors a 15: %d ",somaDosElementos);
    printf("\nQuantdd de elemnts iguais a 15: %d ",qtdadElementsIguais);
   // printf("\nO valor da media: %.2f ",media);
    return 0;
}
