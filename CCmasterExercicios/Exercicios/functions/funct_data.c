#include <stdio.h>
#include <stdio.h>
/*
2. Faca uma funcao que receba a data atual (dia, mes e ano em inteiro) e exiba-a na tela
no formato textual por extenso. Exemplo: Data: 01/01/2000, Imprimir: 1 de janeiro de 2000.
*/
void funct_data(int day, int month, int year){
    printf("a data: %d / %d / %d \n\n",day ,month ,year);

    if(month == 1){
        printf("%d de Janeiro de %d.\n",day,year);
    } else if(month == 2){
        printf("%d de Fevereiro de %d.\n",day,year);
    } else if(month == 3){
        printf("%d de Março de %d.\n",day,year);
    } else if(month == 4){
        printf("%d de Abril de %d.\n",day,year);
    } else if(month == 5){
        printf("%d de Maio de %d.\n",day,year);
    } else if(month == 6){
        printf("%d de Junho de %d.\n",day,year);
    } else if(month == 7){
        printf("%d de Julho de %d.\n",day,year);
    } else if(month == 8){
        printf("%d de Agosto de %d.\n",day,year);
    } else if(month == 9){
        printf("%d de Setembro de %d.\n",day,year);
    } else if(month == 10){
        printf("%d de Outubro de %d.\n",day,year);
    } else if(month == 11){
        printf("%d de Novembro de %d.\n",day,year);
    } else if(month == 12){
        printf("%d de Dezembro de %d.\n",day,year);
    }
}

int main(void){

        funct_data(13, 10, 2024);
    
    return 0;
}