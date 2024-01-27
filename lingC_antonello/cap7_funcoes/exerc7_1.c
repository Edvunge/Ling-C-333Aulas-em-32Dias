#include <stdio.h>
#include <stdlib.h>

// 7.1) Escreva uma função "float media(float n1, float n2)" 
// que dá como resultado a média dos valores.

float media(float n1, float n2){
    float media = 0.0;
    media = ((n1+n2)/2);
    return media;
}

int main(void) {
    printf(" \n A media eh: %.1f ", media(2.1, 3.2));
    return (0);
}