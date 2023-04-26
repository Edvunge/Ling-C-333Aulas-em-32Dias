#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int functionMaiorNumero(int a, int b){
    if(a > b){
        return printf("O maior Numero e: %d",a);
    } else {
        return printf("O maior Numero e: %d",b);
    }
}

functionRandomNumber(){
    int seed = time(NULL); 
    srand(seed); 
    
    int numero = rand() % 100;
    return printf("%d",numero);
}

int main(void){

    functionMaiorNumero(functionRandomNumber() , functionRandomNumber());
    
    return 0;
}