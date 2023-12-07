#include "stdio.h"
#include "stdlib.h"

/*
19.Ler um vetor A com 10 elementos inteiros correspondentes as idades
de um grupo de pessoas. Escreva um programa que determine e
escreva a menor e a maior idades e suas respectivas posições.
*/

int main() {
    int vet_Idade[10] = {2 ,4 ,5 ,6 ,7 ,8 ,9 ,10 ,3 ,1};
    int posicaoMaior = 0, posicaoMenor = 0, j;
    int maior = 0;
    int menor = 0;
    
    for (j = 0; j < 10; j++) { 
        if(vet_Idade[j] > maior) {
            maior = vet_Idade[j];
            posicaoMaior = j;
        } else if (vet_Idade[j] < menor) {
            menor = vet_Idade[j];
            posicaoMenor = j;
        }
    }

    printf("\nMaior idade: %d:%d \nMenor idade: %d:%d",posicaoMaior,maior,posicaoMenor,menor);
    return (0);
}