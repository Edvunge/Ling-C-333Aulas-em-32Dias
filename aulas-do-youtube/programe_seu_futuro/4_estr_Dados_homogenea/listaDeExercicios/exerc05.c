#include <stdio.h>
#include <stdlib.h>

/*
8) Faça um programa que calcule 
    e imprima a soma de todos os elementos de uma matriz 5 x 7.
*/

int main(void) {
    int mat[5][7] = { {3 ,2 ,13 ,14 ,5 ,6 ,7} 
                    , {8 ,9 ,10 ,11 ,5 ,2 ,8} 
                    , {1 ,4 ,21 ,21 ,7 ,8 ,3} 
                    , {4 ,7 ,12 ,14 ,3 ,6 ,8}
                    , {4 ,7 ,12 ,21 ,7 ,8 ,3} };

    int i, j, soma = 0;
    
    for(i = 0; i < 12; i++) {
        for(j = 0; j < 12; j++) {
            soma += mat[i][j];
        }
    }
    
    printf("A Soma de todos os elementos de uma matriz 5 x 7: %d\n",soma);
    return (0);
}