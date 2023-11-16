#include <stdio.h>
#include <stdio.h>

/*
6) Faça um programa que imprima na 
    tela todos os múltiplos de 7 entre 1 e 9999.
*/
int main(void) {
    for(int j = 0; j < 999; j++) {
        if(j % 7 == 0) {
            printf(" %d ",j);
        }
    }
    return 0;
}