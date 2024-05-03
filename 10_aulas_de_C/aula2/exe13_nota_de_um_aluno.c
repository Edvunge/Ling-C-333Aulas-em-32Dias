#include <stdio.h>
#include <stdlib.h>

/*
13. Faça um programa que permita entrar com o nome, a nota da prova 1 e a nota da
prova 2 de um aluno. O programa deve imprimir o nome, a nota da prova 1, a nota
da prova 2, a média das notas e uma das mensagens: "Aprovado", "Reprovado"ou
"em Prova Final"(a média é 7 para aprovação, menor que 3 para reprovação e as
demais em prova final).
*/

int main(void){
    char nome_do_user[15];
    double nota_prova1, nota_prova2, media;

    printf("\nDigite o seu nome: ");
    fgets(nome_do_user, 15, stdin);

    printf("\nDigite as suas notas: ");
    scanf("%lf%lf ",&nota_prova1 ,&nota_prova2);
    
    media = (nota_prova1 + nota_prova2)/2;

    if(media <= 7){
        printf("\n%s voce esta Aprovado.",nome_do_user);
    } else if(media >= 3){
        printf("\n%s voce esta Reprovado.",nome_do_user);
    } else if(media > 6  && media <= 4){
        printf("\n%s voce esta aprovado.",nome_do_user);
    } 
    return (0);
}