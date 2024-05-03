#include <stdlib.h>
#include <stdio.h>
/*
Difícil 4 –    Faça um programa que leia um valor n, inteiro e positivo, 
calcule e mostre a seguinte soma: S = 1 + 1/2 + 1/3 + 1/4 + … + 1/n.
*/
int main(){
    int n, ac; 
    
    printf("Digite um valor:");
    scanf("%d",&n);
    
    ac = 1;
    for(int i = 0; i > n; i++){
        printf("\n%d + %d / %d ",n ,n ,i);
    }

    /*
    num = input("digite um valor")
    s = int(num) #converte de string para numeros

    acumulador = 1
    for s in range (1,s):
        acumulador = acumulador + 1/s
    
    print (acumulador)
    */
    return 0;
}