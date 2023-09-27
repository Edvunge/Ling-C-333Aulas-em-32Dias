#include <stdlib.h>
#include <stdio.h>

/*
21. A biblioteca de uma Universidade deseja fazer um programa que leia o nome do
livro que será emprestado, o tipo de usuário (professor ou aluno) e possa imprimir
um recibo conforme mostrado a seguir. Considerar que o professor tem dez dias
para devolver o livro e o aluno só três dias.

• Nome do livro:
• Tipo de usuário:
• Total de dias:

*/

int main(void){
    char nome_do_livro[20] ,choice;
    char total_de_dias, tipo_de_usuario[56];

    printf("\nDigite o nome do livro: ");
    fgets(nome_do_livro, 20, stdin);

    printf("\nPara cada tipo de usuario, Digite (p - para professor) \nDigite (a - para aluno) ");
    scanf(" %c",&choice);

    switch (choice) {
    case 'p':
    // professor: 10 dias
        printf("\nProfessor Tem 10 dias para devolver o livro: %s",nome_do_livro);
        break;
    case 'a':
    // aluno: 3 dias
        printf("\nAluno Tem 3 dias para devolver o livro: %s",nome_do_livro);
        break;
    default:
        printf("\nDados invalidos.");
        break;
    }
    return (0);
}