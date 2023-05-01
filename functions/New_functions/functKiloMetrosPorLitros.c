#include <stdio.h>
#include <stdlib.h>
/*
14. Faca uma funcao que receba a distancia em Km e a quantidade de litros de gasolina
consumidos por um carro em um percurso, calcule o consumo em Km/l e escreva uma
mensagem de acordo com a tabela abaixo:
*/
int functionKm( float km, float litroGasolina ){
    float consumo = ( km / litroGasolina );

    if(consumo < 8){
        return printf("Venda o carro!");
    } else if(consumo > 8 && consumo < 14){
        return printf("Economico!");
    } else if(consumo > 12 ){
        return printf("Super Economico!");
    }
}


int main(void){
    functionKm(2.3 , 1.2);
    return 0;
}