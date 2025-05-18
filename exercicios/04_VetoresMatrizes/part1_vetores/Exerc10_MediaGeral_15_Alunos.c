#include <stdio.h>
#include <stdlib.h>

/*
10. Faca um programa para ler a nota da prova de 15 alunos e 
armazene num vetor, calcule e imprima a media geral.
*/

int main(void) {
    const int LENTH = 15;
    float nota_prova[LENTH];
    float soma = 0, media = 0;


    for (int a = 0; a < LENTH; a++) {
        printf("Digite a nota do aluno: %d ", a);
        scanf("%f",&nota_prova[a]);
    }

    for (int i = 0; i < LENTH; i++) {
        //printf(" %.2f ", nota_prova[i]);
        soma += nota_prova[i];
    }

    media = (soma/LENTH);
    printf("A media eh: %.2f", media);
    return (0);
}