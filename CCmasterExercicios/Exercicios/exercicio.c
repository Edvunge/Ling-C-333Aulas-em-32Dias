#include <stdio.h>
#include <stdlib.h>  

/*
    Escreva um programa que coloque no ecrã meia arvore de natal com asteriscoos
    O numero de ramos deverá ser introduzido pelo utilizador.
*/
int main() {  

    int i, num;
    char asteristico;

    printf("insira: ");
    scanf("%c",&asteristico);

    printf("insira um numero: ");
    scanf("%d",&num);

    for(i = 0; i < num; i++){
        //printf(" %c \n" , asteristico);
        for(int j = 0; j < i; j++){
           printf(" %c \n" , asteristico); 
        }
    }
    //printf("test....");

    return 0;  
}  