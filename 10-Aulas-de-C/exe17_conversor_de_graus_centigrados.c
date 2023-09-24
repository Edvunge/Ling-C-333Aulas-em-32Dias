#include <stdio.h>
#include <stdlib.h>

/*
17. Faça um programa em C que calcule a conversão entre graus centígrados e Fah-
renheit. Para isso, leia o valor em centígrados e calcule com base na fórmula a
seguir. Após calcular o programa deve imprimir o resultado da conversão.
F=
Em que:
9 ×C + 160
5

• F = Graus em Fahrenheit
• C = Graus centígrados
*/

int main(void){
    double grausEmFahrenheit, grausCentigrados, conversor;

    printf("\nDigite o valor dos graus centigrados: ");
    scanf("%lf",&grausCentigrados);

    conversor = ( (9*grausCentigrados + 160) / 5);
    
    printf("\nO valor da conversao: %lf",conversor);
    return (0);
}