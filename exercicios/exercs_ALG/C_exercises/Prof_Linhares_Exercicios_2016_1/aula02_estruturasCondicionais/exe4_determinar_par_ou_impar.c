#include <stdlib.h>
#include <stdio.h>

/*
4. Fazer um programa para ler um número do usuário e determinar se este número é par ou não
par.
*/

int main(void){

    int num;

    printf("\n Digite um numero");
    scanf("%d",&num);
    
// se numero mod 2 = 0 entao
    if(num % 2 == 0){
        printf("\nO NUMERO %d E PAR",num);
    } else {
        printf("\nO NUMERO %d E IMPAR",num);
    }
    return (0);
}