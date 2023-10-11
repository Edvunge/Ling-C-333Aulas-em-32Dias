#include <stdio.h>
#include <stdlib.h>

/*
2. Escreva um programa que escreva na tela, de 1 até 100, de 1 em 1, 3 vezes. A primeira
vez deve usar a estrutura de repetição for, a segunda while, e a terceira do while.
*/

int main(void){
    int i = 1;

    //For
    for(i; i <= 100; i++){
        printf("%d\n",i);
    }
    

    //While
    while( i <= 100){
        printf("%d\n",i);
        i++;
    }

    //Do-while
    do{
        printf("%d\n",i);
        i++;
    } while (i <= 100);
    

    return (0);
}