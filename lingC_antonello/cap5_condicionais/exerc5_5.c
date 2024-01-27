#include <stdio.h>
#include <stdlib.h>

// 5.5) Faça um programa que lê um número inteiro de 1 a 7 e 
// imprime o dia da semana correspondente (1=Domingo, 2=segunda...), 
// se o número estiver fora deste intervalo 
// o programa deve imprimir uma mensagem de erro.

int main(void){
    int num;

    printf("Digite um numero: \n");
    scanf("%d",&num);

    if(num == 1){
        printf("1 - DOMINGO.\n");
    } else if(num == 2){
        printf("2 - SEGUNDA FEIRA.\n");
    } else if(num == 3){
        printf("3 - TERCA FEIRA.\n");
    } else if(num == 4){
        printf("4 - QUARTA FEIRA.\n");
    } else if(num == 5){
        printf("5 - QUINTA FEIRA.\n");
    } else if(num == 6){
        printf("6 - SEXTA FEIRA.\n");
    } else if(num == 7){
        printf("7 - SABADO.\n");
    } else if(num == 8){
        printf("8 - DOMINGO.\n");
    }
    return (0);
}