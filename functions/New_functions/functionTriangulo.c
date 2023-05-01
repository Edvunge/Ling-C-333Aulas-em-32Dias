#include <stdio.h>
#include <stdlib.h>
/*
15. Crie um programa que receba tr ˆes valores (obrigatoriamente maiores que zero), representando
as medidas dos tr ˆes lados de um tri ˆangulo. Elabore func¸ ˜oes para:
(a) Determinar se eles lados formam um tri ˆangulo, sabendo que:
 O comprimento de cada lado de um tri ˆangulo ´e menor do que a soma dos outros
dois lados.
(b) Determinar e mostrar o tipo de tri ˆangulo, caso as medidas formem um tri ˆangulo.
Sendo que:
 Chama-se equilatero o triangulo que tem tres lados iguais.
 Denominam-se is ´osceles o tri ˆangulo que tem o comprimento de dois lados
iguais.
 Recebe o nome de escaleno o tri ˆangulo que tem os tr ˆes lados diferentes.
*/

int funtionTriangulo(float a, float b, float c){
    float somaDosLados = a + b;
    if(c < somaDosLados){
        if(a == b && a == c || b == c){
            return printf("E UM TRIANGULO EQUILATERO.");
        } else if(a == b || c == b || a == c){
            return printf("E UM TRIANGULO ISOSCELES.");
        } else if(a != b || c != a || b != c ){
            return printf("E UM TRIANGULO ESCALENO.");
        }
    } else {
        return printf("Os lados nao correspondem aos criterios de um triangulo");
    }
}

int main(){
    funtionTriangulo(2.3 , 3.4 , 1.2);
    return 0;
}