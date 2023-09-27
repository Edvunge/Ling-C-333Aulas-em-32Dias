#include <stdio.h>
#include <stdlib.h>

// 11. Faça um programa que leia 3 números e imprima o maior deles.

int main(void){
    int x, y, z;

    printf("\nDigite os tres numeros: ");
    scanf("%d %d %d",&x ,&y ,&z);

    if(x > y && x > z){
        printf("\n%d",x);
    } else if(y > x && y > z){
        printf("\n%d",y);
    } else if(z > y && z > x){
        printf("\n%d",z);
    }
    return (0);
}