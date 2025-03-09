#include <stdio.h>
#include <stdlib.h>

/*
19. Faça um programa em C que calcule o valor de uma prestação em atraso. Para
isso, o programa deve ler o valor da prestação vencida, a taxa periódica de juros
e o período de atraso. Ao final, o programa deve imprimir o valor da prestação
atrasada, o período de atraso, os juros que serão cobrados pelo período de atraso,
o valor da prestação acrescido dos juros. Considere juros simples.
*/

int main(void){
    double valorDaPrestacao, taxaPeriodicaDeJuros,juros ,prestacaoAtrasada;
    int  periodoDeAtraso;

    printf("\nDigite o valor da Prestacao vencida: ");
    scanf("%lf",&valorDaPrestacao);

    printf("\nDigite a taxa periodica de juros: ");
    scanf("%lf",&taxaPeriodicaDeJuros);

    printf("\nPeriodo de Atraso: ");
    scanf("%d",&periodoDeAtraso);
    
    // Calcula os juros simples
    juros = valorDaPrestacao * (taxaPeriodicaDeJuros / 100) * periodoDeAtraso;

    // Calcula o valor da prestação acrescido dos juros
    prestacaoAtrasada = valorDaPrestacao + juros;

    // Exibe os resultados
    printf("Valor da prestacao atrasada: R$ %.2lf\n", prestacaoAtrasada);
    printf("Periodo de atraso: %d meses\n", periodoDeAtraso);
    printf("Juros cobrados pelo periodo de atraso: R$ %.2lf\n", juros);

    return (0);
}