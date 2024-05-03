#include <stdlib.h>
#include <stdio.h>
/*
Intermediário 
14 – Faça um programa que lê as duas notas parciais obtidas por um aluno numa disciplina ao longo de um semestre, 
e calcule a sua média. A atribuição de conceitos obedece à tabela abaixo:  

Média de aproveitamento                        Conceito 

Entre 9.0 e 10.0                                A

Entre 7.5 e 9.0                                 B

Entre 6.0 e 7.5                                 C

Entre 4.0 e 6.0                                 D

Entre 4.0 e 0                                   E  

 O algoritmo deve mostrar na tela as notas, a média, 
 o conceito correspondente e a mensagem “APROVADO” se o conceito for A, B ou C “REPROVADO” se o conceito for D ou E.    
*/
int main (){
    float nota1, nota2, media;

    printf("Notas Parciais: ");
    scanf("%f %f",&nota1 ,&nota2);

    media = (nota1+nota2)/2;

    if(media < 4) {
        printf("\n\tMedia: %.1f \n\tClassificacao: E\n\tREPROVADO.",media);
    } else if(media >= 4 && media < 6) {
        printf("\n\tMedia: %.1f \n\tClassificacao: D\n\tREPROVADO.",media);
    } else if(media >= 6 && media < 7) {
        printf("\n\tMedia: %.1f \n\tClassificacao: C\n\tAPROVADO.",media);
    } else if(media >= 7 && media < 9) {
        printf("\n\tMedia: %.1f \n\tClassificacao: B\n\tAPROVADO.",media);
    } else if(media >= 9 && media < 10) {
        printf("\n\tMedia: %.1f \n\tClassificacao: A\n\tAPROVADO.",media);
    } 
    return 0;
}