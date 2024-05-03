#include <stdio.h>
#include <stdlib.h>

/*
43. Uma empresa irá dar um aumento de salário aos seus 
funcionários de acordo com a categoria de cada empregado. 

O aumento seguirá a seguinte regra:

• Funcionários das categorias 
A, C, F, e H ganharão 10% de aumento sobre o salário;

• Funcionários das categorias B, D, E, I, J e T 
ganharão 15% de aumento sobre o salário;

• Funcionários das categorias K e R ganharão 25% 
de aumento sobre o salário;

• Funcionários das categorias L, M, N, O, P, Q e S 
ganharão 35% de aumento sobre o salário;

• Funcionários das categorias U, V, X, Y, W e Z 
ganharão 50% de aumento sobre o salário.

Faça um algoritmo que escreva nome, 
categoria e salário reajustado de cada empregado.

*/

int main(void) {
    
    // SECCAO DAS VARIAVEIS:
    char nomeFuncionario[12]; 
    double salario = 0.0, salarioReajustado = 0.0;
    char categoria;
    int aumento;
    double ganho = 0.0; 
    

    printf("Digite o nome do funcionario: ");
    fgets(nomeFuncionario, 12, stdin); // FUNCAO FGETS

    printf("Digite o seu salario: ");
    scanf("%lf",&salario);

    // Descubrir qual a sua categoria
    printf("\nDigite a sua categoria de funcionario: ");
    printf("\nAs categorias vao de: (A, B, C ... Z) ");
    scanf(" %c",&categoria);
    
    if(categoria == 'A' || categoria == 'C' || categoria == 'F' || categoria == 'H') {
        // 10% de aumento sobre o salário
        aumento = 10;

        ganho = (salario*aumento)/100;
        salarioReajustado = salario + ganho;

        printf("\n\nNome do funcionario: %s",nomeFuncionario);
        printf("Categoria do funcionario: %c\n",categoria);
        printf("Salario Reajustado: %.2lf\n",salarioReajustado);

    } else if(categoria == 'B' || categoria == 'D' || categoria == 'E' || categoria == 'I' || categoria == 'J' || categoria == 'T') {
        // 15% de aumento sobre o salário
        aumento = 15;

        ganho = (salario*aumento)/100;
        salarioReajustado = salario + ganho;

        printf("\n\nNome do funcionario: %s",nomeFuncionario);
        printf("Categoria do funcionario: %c\n",categoria);
        printf("Salario Reajustado: %.2lf\n",salarioReajustado);
    } else if(categoria == 'K' || categoria == 'R') {
        // 25% de aumento sobre o salário
        aumento = 25;

        ganho = (salario*aumento)/100;
        salarioReajustado = salario + ganho;

        printf("\n\nNome do funcionario: %s",nomeFuncionario);
        printf("Categoria do funcionario: %c\n",categoria);
        printf("Salario Reajustado: %.2lf\n",salarioReajustado);
    } else if(categoria == 'L' || categoria == 'M' || categoria == 'N' || categoria == 'O' || categoria == 'P' || categoria == 'Q' || categoria == 'S') {
        // 35% de aumento sobre o salário
        aumento = 35;

        ganho = (salario*aumento)/100;
        salarioReajustado = salario + ganho;

        printf("\n\nNome do funcionario: %s",nomeFuncionario);
        printf("Categoria do funcionario: %c\n",categoria);
        printf("Salario Reajustado: %.2lf\n",salarioReajustado);
    } else if(categoria == 'U' || categoria == 'V' || categoria == 'X' || categoria == 'Y' || categoria == 'W' || categoria == 'Z') {
        // 50% de aumento sobre o salário
        aumento = 50;

        ganho = (salario*aumento)/100;
        salarioReajustado = salario + ganho;

        printf("\n\nNome do funcionario: %s",nomeFuncionario);
        printf("Categoria do funcionario: %c\n",categoria);
        printf("Salario Reajustado: %.2lf\n",salarioReajustado);
    } else {
         printf("ERRASTE! NAO FAZ PARTE DAS OPCOES...");
    }
    return (0);
}