#include <stdlib.h>
#include <stdio.h>
/*
Faça um algoritmo que imprima de 1 a 10(usando o repita)
*/
int main(){
    int cont = 1;

    do {
        printf("\n%d",cont);
        cont++;
    } while(cont <= 10);
    return 0;
}