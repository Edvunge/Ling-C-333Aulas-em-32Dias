#include <stdio.h>
#include <stdlib.h>

// Contém protótipos de função para funções da biblioteca matemática.
#include <math.h>

int main(void) {
    float c1 = 2.3, d = 4.5, f = 6.5;

    // sqrt
    printf("sqrt(13.0 + 3.0 * 4.0) = %.2f\n", sqrt(13.0 + 3.0 * 4.0));
    
    // exponencial
    printf("exp(1.0) = %.2f\n",exp(1.0));

    // logaritmo
    printf("log(2.7180) = %.3f\n",log(2.7180));
    printf("log(7.7180) = %.3f\n",log(7.7180));
    printf("log(24.7180) = %.3f\n",log(24.7180));
    
    // log10
    printf("log(71.702) = %.3f\n",log10(71.702));
    printf("log(14.780) = %.3f\n",log10(14.780));
    printf("log(12.180) = %.3f\n",log10(12.810));

    // fabs
    printf("fabs(13.522) = %.2f\n",fabs(13.522));
    printf("fabs(2.7180) = %.2f\n",fabs(2.7180));
    printf("fabs(2.7180) = %.2f\n",fabs(2.7180));
    printf("fabs(2.7180) = %.2f\n",fabs(2.7180));

    // ceil - arredondamento x ao menor nao menor que x
    printf("ceil(2.7180) = %.2f\n",ceil(2.7180));
    printf("ceil(2.7180) = %.2f\n",ceil(2.7180));
    printf("ceil(2.7180) = %.2f\n",ceil(2.7180));
    printf("ceil(2.7180) = %.2f\n",ceil(2.7180));
    
    // floor - arredondamento x ao maior inteiro nao maior que x
    printf("floor(2.7180) = %.2f\n",floor(2.7180));
    printf("floor(2.7180) = %.2f\n",floor(2.7180));
    printf("floor(2.7180) = %.2f\n",floor(2.7180));
    printf("floor(2.7180) = %.2f\n",floor(2.7180));
    
    // pow - x elevado a potencia y (x)
    printf("pow(2.7180) = %.2f\n",pow(2.7, 1.80));
    printf("pow(2.7180) = %.2f\n",pow(2.7, 1.80));
    printf("pow(2.7180) = %.2f\n",pow(2.7, 1.80));
    printf("pow(2.7180) = %.2f\n",pow(2.7, 1.80));
    
    // fmod - modulo (resto) de x/y como um numero em ponto flutuante
    /*printf("fmod(2.7180) = %.2f\n",fmod(2.7, 1.80));
    printf("fmod(2.7180) = %.2f\n",fmod(2.7, 1.80));
    printf("fmod(2.7180) = %.2f\n",fmod(2.7, 1.80));
    printf("fmod(2.7180) = %.2f\n",fmod(2.7, 1.80));*/

    // sin - seno trigonometrico de x (x em radianos)
    printf("sin(0.80) = %.2f\n",sin(0.80));
    printf("sin(0.80) = %.2f\n",sin(0.80));
    printf("sin(0.80) = %.2f\n",sin(0.80));
    printf("sin(0.80) = %.2f\n",sin(0.80));

    // cos - cos trigonometrico de x (x em radianos)
    printf("cos(0.80) = %.2f\n",cos(0.80));
    printf("cos(0.80) = %.2f\n",cos(0.80));
    printf("cos(0.80) = %.2f\n",cos(0.80));
    printf("cos(0.80) = %.2f\n",cos(0.80));

    // tan - tan trigonometrico de x (x em radianos)
    printf("tan(0.80) = %.2f\n",tan(0.80));
    printf("tan(0.80) = %.2f\n",tan(0.80));
    printf("tan(0.80) = %.2f\n",tan(0.80));
    printf("tan(0.80) = %.2f\n",tan(0.80));
    return (0);
}