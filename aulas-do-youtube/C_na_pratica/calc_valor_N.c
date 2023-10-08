#include <stdio.h>
#include <stdlib.h>

/*
3.Fazer um programa que receba N valores.
no teclado e determine o maior.
A condição de termino do programa é quando o usuario digitar zero.
*/

int main(void){
    int num, maior; 

    printf("digite um valor n: ");
    scanf("%d", &num);

    maior = num;

    do {
        printf("digite um valor n: ");
        scanf("%d", &num);
        
        if(num > maior){
            maior = num;
        }
    } while (num != 0);
    
    printf("Maior: %d\n", maior);
    return (0);
}