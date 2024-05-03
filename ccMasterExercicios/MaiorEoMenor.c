#include <stdlib.h>
#include <stdio.h>
/*
Fácil 22 – Faça um programa que peça dois números ao usuário e mostre qual o maior e qual o menor  
*/
int main(){
    int num1, num2;
    
    printf("Digite dois numeros:?");
    scanf("%d%d",&num1 ,&num2);
    
    // maior
    if(num1 > num2){
        printf("o num %d e o maior.",num1);
    } else {
        printf("o num %d e o maior.",num2);
    }

    // menor
    if(num2 > num1){
        printf("o num %d e o menor.",num1);
    } else {
        printf("o num %d e o menor.",num2);
    }
    return 0;
}
