#include <stdio.h>
#include <stdlib.h>

/*
exer01
Faça um programa que receba do usuario leituras 
diarias da temperatura de um tanque, durante um periodo de 10 dias. 
Ao final, o programa deverá exibir a temperatura média do periodo,
a temperatura máxima e a temperatura minima registradas.
Utilizar vetores para armazenamento dos valores de temperatura.

Media - somar todos os valores e dividir pelo numero de elemnentos

x = 7+5+4+5+5+54/6
*/

int main(void) {
    float temperatura_diaria[10], soma = 0;
    float media = 0, temp_min = -1, temp_max = 10000; 
    int j = 0;

    for(j; j < 10; j++) {
        printf("Digite a temperatura: do dia %d\n",j);
        scanf("%f",&temperatura_diaria[j]);

        soma += temperatura_diaria[j];

        // temperatura maxima
        if(temp_max <  temperatura_diaria[j] ) {
             temp_max = temperatura_diaria[j]; 
        }

        // temperatura minima
        if(temp_min >  temperatura_diaria[j] ) {
             temp_min = temperatura_diaria[j]; 
        }
    }
    
    
    media = (soma/10);

    printf("valor da media eh: %.1f\n",media);
    printf("valor da temperatura minima eh: %.1f\n",temp_min);
    printf("valor da temperatura maxima eh: %.1f\n",temp_max);
    
    return (0);
}