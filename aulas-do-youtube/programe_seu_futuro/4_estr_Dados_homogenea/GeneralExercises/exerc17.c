#include <stdio.h>
#include <stdlib.h>

/*
17.Ler um vetor A com 10 elementos inteiros correspondentes as idades
de um grupo de pessoas. Escreva um programa que determine e
escreva a quantidade de pessoas que possuem idade superior a 35
anos.
*/

int main(void) {
    int vetIdade[10] = {88,77,6,5,4,32,3,12,13,4};
    int j, quantddPessoas = 0;

    for(j = 0; j < 10; j++) {
        if(vetIdade[j] > 35) {
            quantddPessoas++;
        }
    }
    printf("Quantidade de pessoas maior de 35 anos: %d\n",quantddPessoas);
    return (0);
}