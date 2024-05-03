#include <stdio.h>
#include <stdlib.h>

/*
6. A prefeitura do Rio de Janeiro abriu uma linha de crédito para os funcionários
estatutários. O valor máximo da prestação não poderá ultrapassar 30% do salário
bruto. Faça um programa em linguagem C que permita entrar com o salário bruto
e o valor da prestação e informar se o empréstimo pode ou não ser concedido.
*/

int main(void){
    /*
    desc = (salarioBruto * 30)/100;
    desc = sal - desc; 
    
    
    */
    int prestacao;
    double salarioBruto, desc;
    
    printf("\nDigite o valor do salario bruto: ");
    scanf("%lf",&salarioBruto);

    printf("\nDigite o valor da prestacao: ");
    scanf("%d",&prestacao);

    // calculo da percentagem de 30%
    desc = (salarioBruto * 30)/100;
    desc = salarioBruto - desc;

    if(prestacao < desc){
        printf("\nEmprestimo nao concedido.");
    } else {
        printf("\nEmprestimo concedido.");       
    }
    return (0);
}