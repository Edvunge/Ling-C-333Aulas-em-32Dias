#include <stdio.h>
#include <stdlib.h>
/*
Intermediário 15. Faça um programa que peça os 3 lados de um triângulo. 
O programa deverá informar se os valores podem ser um triângulo. 
Indique, caso os lados formem um triângulo, se o mesmo é: equilátero, isósceles ou escaleno. Dicas:

Três lados formam um triangulo quando a soma de quaisquer dos dois lados é maior que o terceiro.

triag: 
    (a + b) > c
    (a + c) > b
    (b + c) > a

Triângulo Equilátero: três lados iguais;
    se a == b  e  a == c   e  b == c
        triang. equilat.

Triângulo Isósceles: quaisquer dois lados iguais;
    se a == b  e  a == c
        triang. isosc   

Triângulo Escaleno: três lados diferentes;
    se a != b  e  a != c  ou  b != c
        triang. escl
*/
int main(){

    float num1, num2, num3;

    printf("Digite os 3 de um triangulo.");
    scanf("%f %f %f",&num1 ,&num2 ,&num3);

    if( (num1 + num2) > num3 || (num1 + num3) > num2 || (num2 + num3) > num1 ){
        if( (num1 == num2) && (num1 == num3) && (num2 == num3) ){
            printf("\nTriangulo Equilatero.\n");
        } else if( (num1 == num2) && (num1 == num3) ){
            printf("\nTriangulo Isosceles.\n");               
        } else if( (num1 != num2) && (num1 != num3) || (num2 != num3) ){
            printf("\nTriangulo Escaleno.\n");
        }
    } else {
        printf("\nOs Tres lados Nao formam um triangulo.");
    }
    return 0;
}