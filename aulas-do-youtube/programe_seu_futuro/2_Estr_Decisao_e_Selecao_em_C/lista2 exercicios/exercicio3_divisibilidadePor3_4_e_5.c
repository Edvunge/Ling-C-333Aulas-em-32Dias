#include <stdio.h>
#include <stdlib.h>
/*
3) Escreva um programa em C que leia um número e 
informe se ele é divisível por 2, por 3 ou por
5, ou se não é divisível por nenhum deles.
*/
int main(void) {
    int num;

    printf("Digite um valor: \n");
    scanf("%d",&num);

    if(num % 2 == 0 || num % 3 == 0 || num % 5 == 0) {
        printf("E Divisivel por 2 , 3 OU 5\n");
    } else {
        printf("NAO E Divisivel por 2 , 3 OU 5\n");
    }
    return 0;
}