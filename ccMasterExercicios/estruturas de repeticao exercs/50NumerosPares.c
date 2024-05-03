#include <stdlib.h>
#include <stdio.h>
/*
Crie um algoritmo que mostre os numeros pares compreendidos entre 1 e 50.
*/
int main(){
    for(int i = 1; i <= 50; i++){
        if(i % 2 == 0){
           printf("\n%d",i); 
        }
    }
    return 0;
}