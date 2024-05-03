#include <stdio.h>
#include <stdlib.h>
/*
Faca uma funcao e um programa de teste para o calculo do volume de uma esfera.
Sendo que o raio e passado por parametro.
V = 4=3 R3
*/

float functMain(float raio){
    const int PI = 3.14;
    float volumeEsfera;
    volumeEsfera = ( 4/3 * PI * (raio * raio * raio) );
    return printf("O volume da esfera: %.3f ",volumeEsfera);
}

int main(void){

    // Gerando um numero aleatorio.
    int seed = time(NULL); 
    srand(seed); 
    int numero = rand() % 10;

    functMain(numero);
    return 0;
}