#include <stdio.h>
#include <stdlib.h>

/*
3) Escrever um programa que lê um vetor N de tamanho 20 
e o imprime na tela. Em seguida, troque
o 1o elemento com o último, o 2a com o penúltimo, 
... até o 10a com o 11o. Imprima o vetor N
modificado.
*/

int main(void) {
    int vetN[20] = {2,5,6,8,1,3,9,10,7,14,13,8,5,6,4,1,2,3,5,8};
    int i;

    // Imprime o vetor original
    printf("Vetor Original: ");
    for(i = 0; i < 20; i++){
        printf(" %d ", vetN[i]);
    }

    // Troca os elementos
    for(i = 0; i < 10; i++) {
        int temp = vetN[i];
        vetN[i] = vetN[19 - i];
        vetN[19 - i] = temp;
    }

    // Imprime o vetor modificado
    printf("\nVetor Modificado: ");
    for(i = 0; i < 20; i++){
        printf(" %d ", vetN[i]);
    }
    return (0);
}