#include <stdio.h>
#include <stdlib.h>

/*
    5. escreva um algoritmo que leia um valor incial A
    e imprima a sequencia de valores do calculo de A!
    e o seu resultado (fatorial do numero).
    Ex: 5! = 5 x 4 x 3 x 2 x 1 = 120
*/

int main(void){
    // 1. passo: Criar uma contagem decrescente de um numero N até 1.
    int num, fat = 1, cont;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);
    
    if(num > 0){ 
        printf("%d! = ", num);
        for (cont = num; cont >= 1; cont--) {
            fat = fat*cont;
            printf("%d", cont);
            if(cont > 1) {
                printf(" x ");
            } else {
                printf(" = %d\n", fat);
            }
        }
    } else {
        printf("numero menor que zero.");
    }

    // 2. passo: Tratar da multiplicação de cada numero (contador).

    // 3. passo: Armazenar o resultado da operação anterior.
    return(0);
}