#include <stdlib.h>
#include <stdio.h>
/*
Difícil 11 - As organizações CSM resolveram dar um aumento de salário aos seus colaboradores e 
lhe contrataram para desenvolver o programa que calculará os reajustes.  

a. Faça um programa que recebe o salário de um colaborador e o reajuste segundo o seguinte critério, baseado no salário atual;
b. Salários até R$ 280,00 (incluindo): aumento de 20%;
c. Salários entre R$ 280,00 e R$700,00: aumento de 15%;
d. Salários entre R$ 700,00 e R$ 1500,00: aumento de 10%;
e. Salários de R$ 1500,00 em diante: aumento de 5%
Após o aumento ser realizado; informe na tela;

a. O salário antes do reajuste;
b. O percentual de aumento aplicado;
c. O valor do aumento;
d. O novo salário, após o aumento. 
*/
int main (){
    float salarioAtual, percentualAumento, valorDeAumento, salarioPosAumento;

    printf("Digite o seu salario atual: ");
    scanf("%f",&salarioAtual);

    if( salarioAtual <= 280 ) {
        
        valorDeAumento = 20;
        percentualAumento = ( (salarioAtual * valorDeAumento) / 100 );
        salarioPosAumento = (salarioAtual + percentualAumento);

        // saida na tela:
        printf("\n\n\nO salario antes do reajuste: %.2f\n",salarioAtual);
        printf("\nO percentual de aumento aplicado: %.2f\n",valorDeAumento);
        printf("\nO valor do aumento: %.2f\n",percentualAumento);
        printf("\nO novo salario, apos o aumento: %.2f\n",salarioPosAumento);

    } else if( salarioAtual > 280 && salarioAtual < 700 ) {
        
        valorDeAumento = 15;
        percentualAumento = ( (salarioAtual * valorDeAumento) / 100 );
        salarioPosAumento = (salarioAtual + percentualAumento);

        // saida na tela:
        printf("\n\n\nO salario antes do reajuste: %.2f\n",salarioAtual);
        printf("\nO percentual de aumento aplicado: %.2f\n",valorDeAumento);
        printf("\nO valor do aumento: %.2f\n",percentualAumento);
        printf("\nO novo salario, apos o aumento: %.2f\n",salarioPosAumento);

    } else if( salarioAtual > 700 && salarioAtual < 1500 ) {
        
        valorDeAumento = 10;
        percentualAumento = ( (salarioAtual * valorDeAumento) / 100 );
        salarioPosAumento = (salarioAtual + percentualAumento);

        // saida na tela:
        printf("\n\n\nO salario antes do reajuste: %.2f\n",salarioAtual);
        printf("\nO percentual de aumento aplicado: %.2f\n",valorDeAumento);
        printf("\nO valor do aumento: %.2f\n",percentualAumento);
        printf("\nO novo salario, apos o aumento: %.2f\n",salarioPosAumento);

    } else {
        
        valorDeAumento = 5;
        percentualAumento = ( (salarioAtual * valorDeAumento) / 100 );
        salarioPosAumento = (salarioAtual + percentualAumento);

        // saida na tela:
        printf("\n\n\nO salario antes do reajuste: %.2f\n",salarioAtual);
        printf("\nO percentual de aumento aplicado: %.2f\n",valorDeAumento);
        printf("\nO valor do aumento: %.2f\n",percentualAumento);
        printf("\nO novo salario, apos o aumento: %.2f\n",salarioPosAumento);

    }
    return 0;
}