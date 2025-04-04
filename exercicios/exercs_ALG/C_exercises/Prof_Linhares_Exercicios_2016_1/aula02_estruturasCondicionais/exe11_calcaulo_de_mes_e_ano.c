#include <stdio.h>
#include <stdlib.h>

/*
11. Escreva um programa para receber do usuário um mês (de 1 a 12) e um ano (de 0 D.C. em
diante) e mostrar o número de dias daquele mês daquele ano. Utilizar switch e levar em
consideração anos bissextos para o cálculo.
*/


// Função para verificar se um ano é bissexto
int ehBissexto(int ano) {
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        return 1; // É bissexto
    } else {
        return 0; // Não é bissexto
    }
}

// Função para obter o número de dias em um mês específico
int numeroDeDiasNoMes(int mes, int ano) {
    switch (mes) {
        case 4:
        case 6:
        case 9:
        case 11:
            return 30; // Meses com 30 dias
        case 2:
            return ehBissexto(ano) ? 29 : 28; // Fevereiro (28 ou 29 dias em anos bissextos)
        default:
            return 31; // Meses com 31 dias
    }
}

int main() {
    int ano, mes;

    printf("Digite o ano (depois de Cristo): ");
    scanf("%d", &ano);

    printf("Digite o mês (1 a 12): ");
    scanf("%d", &mes);

    if (mes < 1 || mes > 12) {
        printf("Mês inválido.\n");
    } else {
        int dias = numeroDeDiasNoMes(mes, ano);
        printf("Em %d/%d há %d dias.\n", mes, ano, dias);
    }

    return 0;
}


