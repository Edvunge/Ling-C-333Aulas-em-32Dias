#include <stdlib.h>
#include <stdio.h>
/*
Intermediário 5 –    Faça um programa que leia três valores (A, B, C) e mostre-os na ordem lida.  
Em seguida, mostre-os em ordem crescente e decrescente.
*/
int main(void){
    
    int a,b,c;

        printf("Insira tres numeros:? ");
        scanf("%d%d%d",&a ,&b ,&c);

        printf("a ordem lida e: ( %d , %d , %d ) ",a ,b ,c);

        if( (a > b) && (a > c) && (b > c) ){
            printf("%d e o maior, depois vem o %d , e o menor e %d",a ,b ,c);
        } else if( (b > a) && (b > c) && (a > c) ){
            printf("%d e o maior, depois vem o %d , e o menor e %d",b ,a ,c);
        } else if( (c > b) && (a < c) && (a > b) ){
            printf("%d e o maior, depois vem o %d , e o menor e %d",c ,a ,b);
        }
    return 0; 
}