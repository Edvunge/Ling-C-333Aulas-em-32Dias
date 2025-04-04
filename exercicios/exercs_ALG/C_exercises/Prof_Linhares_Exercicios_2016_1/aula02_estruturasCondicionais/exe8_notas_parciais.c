#include <stdio.h>
#include <stdlib.h>

/*
8. Fazer um programa que recebe duas notas parciais de um aluno (0 a 100) e informa se ele
está aprovado (média maior ou igual a 70), em exame final (média entre 40 e 69) ou
reprovado (média menor do que 40). Caso esteja em exame o programa deve pedir a nota do
exame (0 a 100) e informar se o aluno está aprovado (média mais nota do exame maior ou
igual a 100) ou reprovado (média mais nota do exame menor do que 100).
*/

int main(void){
    double nota1, nota2, media, notaExame;

    printf("\nDigite a sua primeira nota:");
    scanf("%lf",&nota1);

    printf("\nDigite a sua segunda nota:");
    scanf("%lf",&nota2);

    media = (nota1 + nota2)/2;

    if(media >= 70){
        printf("\nAluno Aprovado.");
    } else if(media < 40 && media < 69){
            if ( (media + notaExame)  >= 100){
                printf("\nAluno Aprovado - vindo do exame.");
            } else if((media + notaExame) < 100){
                printf("\nAluno Reprovado - vindo do exame.");
            }
        // printf("\nAluno Vai A Exame");
    } else if(media < 40){
        printf("\nAluno Reprovado.");
    }
    return (0);
}