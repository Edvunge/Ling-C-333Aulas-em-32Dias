#include <stdlib.h>
#include <stdio.h>
/*
Difícil 12 - Faça um programa para o cálculo de uma folha de pagamento, 
sabendo que os descontos são do imposto de Renda, que depende do salário bruto (conforme tabela abaixo) 
e 3% para o Sindicato e que o FGTS corresponde a 11% do salário bruto, mas não é descontado (é a empresa que deposita.)

O salário líquido corresponde ao salário bruto menos os descontos 
O programa deverá pedir ao usuário o valor da sua hora e a quantidade de horas trabalhadas no mês.

a. Desconto do IR;
b. Salário Bruto ate R$900,00 (inclusive) – Isento;
c. Salário Bruto de R$ 1500, 00 (inclusive) – desconto de 5%;
d. Salario bruto até R$ 2500,00 (Inclusive) – desconto de 10%;
e. Salário bruto acima de 2500 – Desconto de 20%.
Imprima na tela as informações, dispostas conforme o exemplo abaixo, no exemplo valor da hora é 5 e a quantidade de horas é 220.  

Salário bruto (5 * 220)           : R$   1100,00

( – ) IR (5%)                     : R$     55,00

( – ) INSS ( 10% )                 : R$     110,00

FGTS ( 11%)                       : R$     121,00

Total de descontos                 : R$     165,00

Salário Líquido                   : R$     935,00    
*/
int main (){

    // declaração de variaveis
    float valorHora, horasTrabalhadas, desconto_IR, percentual_desc_IR, desconto_INSS,
    percentual_desc_INSS, total_de_descontos, salario_liquido, salario_bruto ,percentual_desc_FGTS;

    printf("\n\tDigite o valor da hora e o quantidade de horas trabalhadas: ");
    scanf("%f %f",&valorHora ,&horasTrabalhadas);

    salario_bruto = (valorHora * horasTrabalhadas);

    if( salario_bruto <= 900 ) {

        // calculo do desconto de INSS
        percentual_desc_INSS = ( (salario_bruto * 10) / 100 );
        desconto_INSS = (salario_bruto - percentual_desc_INSS);    

        // calculo do FGTS (11%)
        percentual_desc_FGTS = ( (salario_bruto * 11) / 100 );

      // calculo dos descontos e o salario liquido
        total_de_descontos = ( percentual_desc_IR + percentual_desc_INSS );
        salario_liquido = ( salario_bruto -  total_de_descontos );
        printf("\n\t============================================================");
        printf("\n\t\tO salario bruto     : RS %.2f\n",salario_bruto);
        printf("\n\t\tIsento de IR          : RS 0.00\n");
        printf("\n\t\tO valor do INSS       : RS %.2f\n",percentual_desc_INSS);
        printf("\n\t\tO valor do FGTS       : RS %.2f\n",percentual_desc_FGTS);
        printf("\n\t\tO total de descontos  : RS %.2f\n",total_de_descontos);
        printf("\n\t\tO salario liquido     : RS %.2f\n",salario_liquido);
        printf("\n\t============================================================"); 

    } else if(salario_bruto <= 1500) {

        printf("\nValor do salario bruto: %f\n",salario_bruto); 
        // calculo do desconto de IR
        percentual_desc_IR = ( (salario_bruto * 5) / 100 );
        desconto_IR = (salario_bruto - percentual_desc_IR); 

        // calculo do desconto de INSS
        percentual_desc_INSS = ( (salario_bruto * 10) / 100 );
        desconto_INSS = (salario_bruto - percentual_desc_INSS);    

        // calculo do FGTS (11%)
        percentual_desc_FGTS = ( (salario_bruto * 11) / 100 );
      
        // calculo dos descontos e o salario liquido
        total_de_descontos = ( percentual_desc_IR + percentual_desc_INSS );
        salario_liquido = ( salario_bruto -  total_de_descontos );
        printf("\n\t============================================================");
        printf("\n\t\tO salario bruto     : RS %.2f\n",salario_bruto);
        printf("\n\t\tValor de IR           : RS %.2f\n",percentual_desc_IR);
        printf("\n\t\tO valor do INSS       : RS %.2f\n",percentual_desc_INSS);
        printf("\n\t\tO valor do FGTS       : RS %.2f\n",percentual_desc_FGTS);
        printf("\n\t\tO total de descontos  : RS %.2f\n",total_de_descontos);
        printf("\n\t\tO salario liquido     : RS %.2f\n",salario_liquido);
        printf("\n\t============================================================"); 

    }  else if(salario_bruto <= 2500) {

        // calculo do desconto de IR
        percentual_desc_IR = ( (salario_bruto * 10) / 100 );
        desconto_IR = (salario_bruto - percentual_desc_IR); 

        // calculo do desconto de INSS
        percentual_desc_INSS = ( (salario_bruto * 10) / 100 );
        desconto_INSS = (salario_bruto - percentual_desc_INSS);    

        // calculo do FGTS (11%)
        percentual_desc_FGTS = ( (salario_bruto * 11) / 100 );
      
        // calculo dos descontos e o salario liquido
        total_de_descontos = ( percentual_desc_IR + percentual_desc_INSS );
        salario_liquido = ( salario_bruto -  total_de_descontos );
        printf("\n\t============================================================");
        printf("\n\t\tO salario bruto     : RS %.2f\n",salario_bruto);
        printf("\n\t\tValor de IR           : RS %.2f\n",percentual_desc_IR);
        printf("\n\t\tO valor do INSS       : RS %.2f\n",percentual_desc_INSS);
        printf("\n\t\tO valor do FGTS       : RS %.2f\n",percentual_desc_FGTS);
        printf("\n\t\tO total de descontos  : RS %.2f\n",total_de_descontos);
        printf("\n\t\tO salario liquido     : RS %.2f\n",salario_liquido);
        printf("\n\t============================================================"); 

    }  else if(salario_bruto > 2500) {

        // calculo do desconto de IR
        percentual_desc_IR = ( (salario_bruto * 20) / 100 );
        desconto_IR = (salario_bruto - percentual_desc_IR); 

        // calculo do desconto de INSS
        percentual_desc_INSS = ( (salario_bruto * 10) / 100 );
        desconto_INSS = (salario_bruto - percentual_desc_INSS);    

        // calculo do FGTS (11%)
        percentual_desc_FGTS = ( (salario_bruto * 11) / 100 );
      
        // calculo dos descontos e o salario liquido
        total_de_descontos = ( percentual_desc_IR + percentual_desc_INSS );
        salario_liquido = ( salario_bruto -  total_de_descontos );
        printf("\n\t============================================================");
        printf("\n\t\tO salario bruto     : RS %.2f\n",salario_bruto);
        printf("\n\t\tValor de IR           : RS %.2f\n",percentual_desc_IR);
        printf("\n\t\tO valor do INSS       : RS %.2f\n",percentual_desc_INSS);
        printf("\n\t\tO valor do FGTS       : RS %.2f\n",percentual_desc_FGTS);
        printf("\n\t\tO total de descontos  : RS %.2f\n",total_de_descontos);
        printf("\n\t\tO salario liquido     : RS %.2f\n",salario_liquido);
        printf("\n\t============================================================"); 

    } else {
        printf("\n\tParamentros Indisponiveis.\n");
    }
    return 0;
}