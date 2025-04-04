#include <stdio.h>
#include <stdlib.h>

/*
10. (Cortesia do Prof. Bogdan Tomoyuki Nassu) Escreva um programa que receba a velocidade
máxima em uma avenida e a velocidade com que um motorista estava dirigindo nela.
Calcule a multa que o motorista vai receber, considerando que são pagos R$ 5,00 por cada
km/h que estiver acima da velocidade permitida (considere apenas números inteiros). Se a
velocidade do motorista estiver dentro do limite, o programa deve informar que não há
multa.
*/

int main(void){
    double velocidade_permitida, velocidade_de_motorista, multa;

    printf("\nVelocidade maxima permitida numa avenida.");
    scanf("%lf",&velocidade_permitida);

    printf("\nVelocidade com que um motorista esta digindo.");
    scanf("%lf",&velocidade_de_motorista);
   
   // calculo da multa 
    multa = velocidade_de_motorista - velocidade_permitida;
    multa = multa * 5;

    if(velocidade_permitida > 78) {
        printf("\nPassou do limite %.2lf entao tera que pagar a multa de %.2lf",velocidade_de_motorista ,multa);
    } else {
        printf("\nVelocidade dentro do limite nao ha multa.");       
    }   
    return (0);
}