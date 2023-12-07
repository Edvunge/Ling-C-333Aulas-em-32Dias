#include <stdio.h>
#include <stdlib.h>

/*
2. Faça um programa que armazene 10 letras em um vetor e 
imprima uma listagem numerada.
*/

int main(void) {
    char letras[10] = {'a','b','c','d','e','f','g','h','i','j'};

    for(int j = 0; j < 10; j++){
        printf(" %d: %c \n",j ,letras[j]);
    }
    return (0);
}