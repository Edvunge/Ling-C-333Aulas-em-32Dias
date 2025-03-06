#include <stdio.h>

/*
4. Defina uma estrutura chamada Circle para representar um círculo com um raio. 
Escreva um programa em C para calcular a área e o perímetro de dois círculos 
e exibir os resultados.
*/

#define pi 3.14151659

struct Circle {
    double raio;
};


int main(void) {
    
    float areaDoCirculo1;
    float perimetroDoCirculo1;
    float areaDoCirculo2;
    float perimetroDoCirculo2;

    struct Circle circulo1;
    struct Circle circulo2;

    circulo1.raio = 21.31;
    circulo2.raio = 12.13;
    
    areaDoCirculo1 = (pi * (circulo1.raio * circulo1.raio));
    perimetroDoCirculo1 = (2 * pi * circulo1.raio);

    areaDoCirculo2 = (pi * (circulo2.raio * circulo2.raio));
    perimetroDoCirculo2 = (2 * pi * circulo2.raio);

    printf("#1: a area do circulo: %.2f\n",areaDoCirculo1);
    printf("#2: a area do circulo: %.2f\n",areaDoCirculo1);

    printf("#1: O Perimetro Do Circulo: %.2f\n",perimetroDoCirculo2);
    printf("#2: O Perimetro Do Circulo: %.2f\n",perimetroDoCirculo2);

    return (0);
}