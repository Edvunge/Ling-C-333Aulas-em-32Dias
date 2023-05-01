#include <stdio.h>
#include <stdlib.h>
/*
22. Crie uma funcao que receba como parametro um valor inteiro e gere como saıda n linhas
com pontos de exclamacao, conforme o exemplo abaixo (para n = 5):
!
!!
!!!
!!!!
!!!!!
*/
void functionNumMultiply(int n){
    int i;
    int j;
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            printf("!\n");
        }
    }
}
int main(void){
    functionNumMultiply(5);
    return 0;
}