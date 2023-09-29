#include <stdio.h>
#include <stdlib.h>

/*
----------------------
2. Escreva um algoritmo que calcule o IMC de uma pessoa (Indice de Massa Corporal).
o calculo do IMC é feito dividindo o peso (em quilogramas)
pela altura (em metros) ao quadrado.
----------------------
*/

int main(void){
    double imc, peso, altura;

    printf("\nDigite o seu peso.");
    scanf("%lf",&peso);

    printf("\nDigite o sua altura.");
    scanf("%lf",&altura);

    imc = (peso/(altura * altura));

    printf("\nO valor do IMC: %.2lf",imc);
    return (0);
}