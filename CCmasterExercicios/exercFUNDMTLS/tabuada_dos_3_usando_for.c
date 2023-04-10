#include <stdio.h>
#include <stdlib.h>
/*
usando o FOR faça um algoritmo para calcular e mostrar a tabuada de 3 
conforme a saida abaixo: 
3 x 1 = 3
3 x 2 = 6
...
3 x 10 = 30
*/
int main(){
    int num = 12, i ;

    for(i = 1; i <= 12; i++){
        printf("\n%d X %d = %d ",num, i,num*i);
    }
    return 0;
}