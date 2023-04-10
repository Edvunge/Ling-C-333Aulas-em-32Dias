#include <stdio.h>
#include <stdlib.h>
/*
Fácil 5- Faça um programa para a leitura de duas notas parciais de um aluno.  

A mensagem “Aprovado”, se a média alcançada for maior ou igual a sete;
A mensagem “Aprovado com Distinção”, se a média for igual a dez;
A mensagem “Reprovado” se a média for menor de do que sete;
*/
int main(){
    float nota1, nota2, media;

    printf("Digite a sua primeira nota:?");
    scanf("%f",&nota1);

    printf("Digite a sua segunda nota:?");
    scanf("%f",&nota2);

    media = (nota1 + nota2)/2;

    if(media < 7){
        printf("Reprovado.\n");
    } else if (media == 10) {
        printf("Aprovado com distincao.\n");
    } else if (media >= 7){
        printf("Aprovado.");
    }
    return 0;
}
