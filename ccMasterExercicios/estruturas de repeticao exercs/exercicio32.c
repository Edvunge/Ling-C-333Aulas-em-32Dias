#include <stdlib.h>
#include <stdio.h>
/*
Fácil 3 –    Faça um programa que verifique e 
mostre os números entre 1.000 e 2.000 (inclusive) que, 
quando divididos por 11 produzam resto igual a 2.
*/
int main(){
    for(int i = 1000; i <= 2000; i++){
        if(i % 5 == 2){
            printf("\n%d",i);
        }
    }
    return 0;
}