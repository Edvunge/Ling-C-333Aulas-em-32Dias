#include <stdio.h>
#include <stdlib.h>

/*
5) O IMC (Índice de Massa Corporal), 
pode ser calculado dividindo-se o peso da pessoa (em kg)
pela altura (h em metros) elevada ao quadrado (IMC= m/h²). 
Escreva um programa que leia o peso e a altura de uma pessoa, 
calcule e mostre o IMC e a 
faixa em que o indivíduo se enquadra de cordo
com a tabela abaixo:

            IMC                         Interpretação
        Menor que 18,5                  Abaixo do peso
        Entre 18,5 e menor que 25        Peso normal
        Entre 25 e menor que 30           Sobrepeso
        Entre 30 e menor que 35         Obesidade grau 1
        Entre 35 e menor que 40         Obesidade grau 2
        Maior ou igual a 40             Obesidade grau 3
*/

int main() {
    float peso, altura, imc;

    printf("Digite o peso: \n");
    scanf("%f",&peso);

    printf("Digite a altura: \n");
    scanf("%f",&altura);

    imc = ((peso)/(altura*altura));
    
    if(imc < 18.5){
        printf("Abaixo do Peso\n");
    } else if(18.5 >= imc && imc < 25){
        printf("Peso Normal\n");
    } else if(25 >= imc && imc < 30){
        printf("Sobrepeso\n");
    } else if(30 >= imc && imc < 35){
        printf("Obesidade Grau 1\n");
    } else if(35 >= imc && imc < 40){
        printf("Obesidade Grau 2\n");
    } else if(imc >= 40){
        printf("Obesidade Grau 3\n");
    }
    return 0;
}