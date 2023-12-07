#include <stdio.h>
#include <stdlib.h>

/*
18. Escreva um algoritmo que leia certa quantidade de numeros e 
imprima o maior deles e quantas vezes o maior numero foi lido. 
A quantidade de numeros a serem lidos deve ser fornecida pelo usuario.
*/

int main(void) {
    int numerosAserLidos = 0, numerMaior = 0, numerMaiorDeVezes = 0;

    printf("Digite o numr a ser lido: ");
    scanf("%d",&numerosAserLidos);

    for (int j = 1; j < numerosAserLidos; j++) {
        if(j > numerMaior) {
            numerMaior = j;
            numerMaiorDeVezes++;
        }
    }

    printf("O maior numero: %d\n",numerMaior);
    printf("O maior numero que mais se repete: %d\n",numerMaiorDeVezes);
    return (0);
}