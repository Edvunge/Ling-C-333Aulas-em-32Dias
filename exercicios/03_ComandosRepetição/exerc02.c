#include <stdio.h>
#include <stdlib.h>

/*
2. Escreva um programa que escreva na tela, de 1 ate 100, 
de 1 em 1, 3 vezes. 
A primeira vez deve usar a estrutura de repeticao for, 
a segunda while, e a terceira do while.
*/

int main(void) {
    //----------------------------------------- FOR
    for(int n = 1; n <= 100; n++) {
        printf(" %d ",n);
    }
    printf("\n\n");

    //----------------------------------------- WHILE
    int m = 1;
    
    while(m <= 100) {
        printf(" %d ",m);
        m++;
    }
    printf("\n\n");

    //----------------------------------------- DO-WHILE
    int p = 1;
    
    do {
        printf(" %d ",p);
        p++;
    } while(p <= 100);
    printf("\n\n");
    return (0);
}