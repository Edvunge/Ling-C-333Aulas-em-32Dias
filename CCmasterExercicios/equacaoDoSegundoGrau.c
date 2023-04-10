#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
Intermediário 16. Faça um programa que calcule as raízes de uma equação do segundo grau, na forma ax2 + bx + c. 
O programa deverá pedir os valores de a, b e c e fazer as consistências, informando ao usuário nas seguintes situações:  

a. Se o usuário informar o valor de A igual a zero. 
    a equação não e do segundo grau e o programa não deve fazer pedir os demais valores, sendo encerrado;

b. Se o delta calculado for negativo, a equação não possui raízes reais. Informe ao usuário e encerre o programa;

c. Se o delta calculado for igual a zero a equação possui apenas uma raiz real; informe ao usuário;
d. Se o delta for positivo, a equação possui duas raízes reais; informe-as ao usuário; 
*/
int main(){
    float a, b, c, delta, xis, xis_1, xis_2, raiz_quadrada = 0;

    printf("\nDigite 3 valores para: a, b, c\n");
    scanf("%f %f %f",&a ,&b ,&c);

    // calulo de delta: DELTA = b (ao quadrado) - 4ac
    delta = ( (b*b) - (4*a*c) );

    raiz_quadrada = sqrt(delta);

    if(a == 0){
        
        printf("\nA equacao nao e do segundo grau.\nPrograma Encerrado.\n");
    
    } else if(delta < 0){
        
        printf("\nEsta equacao nao possui raizes reais\nPrograma Encerrado.\n");

    } else if(delta == 0){
        
        printf("\nA equacao possui apenas uma raiz real.\nPrograma Encerrado.\n");

    } else if(delta > 0){

        xis_1 = ( (- b + raiz_quadrada) / 2*c );
        xis_2 = ( (- b - raiz_quadrada) / 2*c );

        printf("\nO valor da raiz 1: %f\n",xis_1);
        printf("\nO valor da raiz 2: %f\n",xis_2);
        printf("\nPrograma Encerrado.\n");
    }
    return 0;
}