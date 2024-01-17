#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* BASKARA 
um programa que calcula as raizes de uma equação do 2 grau
    do tipo: ax(ao qudrd) + bx + c = 0

recebe do usuario os valores de a, b e c
    - entradas
retorna como saida os valores de x1 e raizX2
    - saida

------------------
Se Δ < 0, 
    a equação do segundo grau não possui raízes reais;

Se Δ = 0, 
    a equação do segundo grau possui uma raiz real;

Se Δ > 0, 
    a equação do segundo grau possui duas raízes reais.
*/

float a = 0.0, b = 0.0, c = 0.0, x = 0.0, raizX1 = 0.0, raizX2 = 0.0;

void entradaDeValores(void);

int main(void) {
    int raizDelta;
    float DELTA;
    
    entradaDeValores();
    // calculo do delta
    DELTA = ((b*b) - (4*a*c));
    // raiz quadrad do delta
    raizDelta = sqrt(DELTA);


    if (DELTA < 0){
        printf("Esta equacao do 2 Grau, nao possui raizes reais.");
        printf("Programa Encerrado, Fim do Calculo.");
    } else if (DELTA == 0) {
        // Possui Uma Raiz
        x =(((-b) + raizDelta)/(2*a));
        printf("O valor de X eh: %.1f\n",x);
    } else if (DELTA > 0) {
        // Possui Duas Raizes
        raizX1 =(((-b) + raizDelta)/(2*a));
        raizX2 =(((-b) - raizDelta)/(2*a));
        printf("O valor de X1 eh: %.1f\n",raizX1);
        printf("O valor de X2 eh: %.1f\n",raizX2);
    }
    return (0);
}


void entradaDeValores(void){
    printf("Digite o valor para variavel (a): \n");
    scanf("%f",&a);

    printf("Digite o valor para variavel (b): \n");
    scanf("%f",&b);

    printf("Digite o valor para variavel (c): \n");
    scanf("%f",&c);
}