#include <stdio.h>
#include <stdlib.h>

/*
14. Faça um programa que permita entrar com o salário de uma pessoa e imprima o
desconto do INSS segundo a tabela seguir:

Salário =============================================== Faixa de Desconto
Menor ou igual à R$600,00 --------------------------------- Isento
Maior que R$600,00 e menor ou igual a R$1200,00 ------------- 20%
Maior que R$1200,00 e menor ou igual a R$2000,00 ------------ 25%
Maior que R$2000,00 ----------------------------------------- 30%

desc_INSS = (salario * 45)/100;
salario = salario - desc_INSS;
*/

int main(void){
    double salario, desc_INSS, salario_aplicado_INSS;

    printf("\nDigite o salario: ");
    scanf("%lf",&salario);

    if(salario <= 600.00) { 
        // isento
        printf("\nEsta Isento de pagar Inss.");
    } else if(salario >= 600.00  &&  salario <= 1200.00) { 
        // 20%
        desc_INSS = (salario * 20)/100;
        salario_aplicado_INSS = salario - desc_INSS;

        printf("\nO salario depois do INSS: %.2lf",salario_aplicado_INSS);
    
    } else if(salario >= 1200.00 &&  salario <= 2000.00) { 
        // 25%
        desc_INSS = (salario * 25)/100;
        salario_aplicado_INSS = salario - desc_INSS;

        printf("\nO salario depois do INSS: %.2lf",salario_aplicado_INSS);
    } else if(salario > 2000.00) { 
        // 30%
        desc_INSS = (salario * 30)/100;
        salario_aplicado_INSS = salario - desc_INSS;

        printf("\nO salario depois do INSS: %.2lf",salario_aplicado_INSS);
    }
    return (0);
}