#include <stdlib.h>
#include <stdlib.h>
/*
Fácil  2 –  Faça um programa que mostre as tabuadas dos números de 1 a 10 usando laços de repetição.
*/
int main(){
    int num = 12;

    for(int i = 1; i < 10; i++){
        printf("\n%d X %d = %d",i ,num, i*num);
    }
    return 0;
}