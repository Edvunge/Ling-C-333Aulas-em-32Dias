#include <stdio.h>
#include <stdlib.h>
/*
Fácil 10- Faça um programa que pergunte em que turno você estuda. 
Peça para digitar M-matutino ou V-vespertino ou N-noturno. 
Imprima a mensagem “Bom dia!” ou  “Boa Noite” ou “Valor inválido”, conforme o caso.
*/
int main (){
    char turnoEstudo;

    printf("\nEm que turno tu estudas:?");
    scanf("%s",&turnoEstudo);

    if(turnoEstudo == 'M'){
        printf("Bom dia!\n");
    } else if(turnoEstudo == 'V'){
        printf("Boa Tarde\n");
    }else if(turnoEstudo == 'N'){
        printf("Boa Noite\n");
    }else {
        printf("Valor invalido\n");
    }
    return 0;
}
