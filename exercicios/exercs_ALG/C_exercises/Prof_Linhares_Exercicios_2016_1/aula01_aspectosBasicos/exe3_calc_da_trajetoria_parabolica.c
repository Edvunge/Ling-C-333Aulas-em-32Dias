#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
3. Fazer um programa para calcular uma trajetória parabólica. O programa deve:
    
    a. Receber do usuário a altura relativa ao solo de onde o projétil é lançado, a velocidade
        inicial em m/s e o ângulo de lançamento

    b. Calcular e mostrar a quantos metros de distância o projétil atingirá o chão,
        considerando aceleração da gravidade igual a 9,81 m/s2.
*/

// Função para converter graus em radianos
/*double radians(double degrees) {
    const double M_PI = 3.1415;
    return degrees * (M_PI/180.0);
}*/

int main(void){
    
    // definição das variaveis
    double  alturaDoSolo, 
            velocidadeInicialEmMetrosPorSegds, 
            anguloDeLancamento;
    
    const double M_PI = 3.1415;

    printf("\nDigite o valor da altura do solo:");
    scanf("%lf",&alturaDoSolo);

    printf("\nDigite o valor da velocidade inicial em m/s:");
    scanf("%lf",&velocidadeInicialEmMetrosPorSegds);

    printf("\nDigite o valor do angulo de lançamento:");
    scanf("%lf",&anguloDeLancamento);

    // Converter o ângulo de graus para radianos
    double angulo_radianos = anguloDeLancamento * M_PI / 180.0;

    // Constante da aceleração devido à gravidade
    double aceleracaoDaGravidade = 9.81;

    // Calcular a distância percorrida
    double distancia = (velocidadeInicialEmMetrosPorSegds * velocidadeInicialEmMetrosPorSegds * sin(2 * angulo_radianos)) / aceleracaoDaGravidade;

    printf("O projetil atingira o chao a uma distancia de %.2lf metros.\n", distancia);

/*
    d = ( (v*v) * sin(2a) )/g

    onde:

    d: é a distância percorrida (em metros) - distanciaDoProjetil.

    v: é a velocidade inicial do projétil (em metros por segundo) - velocidadeInicialEmMetrosPorSegds.

    a: é o ângulo de lançamento (em radianos) - anguloDeLancamento.

    g: é a aceleração devido à gravidade (em metros por segundo ao quadrado) - aceleracaoG.


    g = 9,81 m/s².     
*/
    return (0);
}
