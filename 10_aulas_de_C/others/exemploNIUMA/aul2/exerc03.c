#include <stdio.h>
#include <stdlib.h>

/*
a) Janeiro (1): Verão
b) Fevereiro (2): Verão
c) Março (3): Verão
d) Abril (4): Outono
e) Maio (5): Outono
f) Junho (6): Outono
g) Julho (7): Inverno
h) Agosto (8): Inverno
i) Setembro (9): Inverno
j) Outubro (10): Primavera
k) Novembro (10): Primavera
l) Dezembro (10): Primavera

*/

int main(void) {
    // declaração de variaveis
    int mes;

    printf("Digite o numero que corresponda a um mes do ano,\n");
    printf("Onde (1 jan a 12 dez)\n");
    scanf("%d",&mes);

    if (mes == 1) {
        printf("Janeiro (1): Verao");
    } else if(mes == 2) {
        printf("Fevereiro (2): Verao");
    } else if(mes == 3) {
        printf("Marco (3): Verao");
    } else if(mes == 4) {
        printf("Abril (4): Outono");
    } else if(mes == 5) {
        printf("Maio (5): Outono");
    } else if(mes == 6) {
        printf("Junho (6): Outono");
    } else if(mes == 7) {
        printf("Julho (7): Inverno");
    } else if(mes == 8) {
        printf("Agosto (8): Inverno");
    } else if(mes == 9) {
        printf("Setembro (9): Inverno");
    } else if(mes == 10) {
        printf("Outubro (10): Primavera");
    } else if(mes == 11) {
        printf("Novembro (10): Primavera");
    } else if(mes == 12) {
        printf("Dezembro (10): Primavera");
    } else {
        printf("Numero Invalido, tchau.");
    }
    return (0);
}