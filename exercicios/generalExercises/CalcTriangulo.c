#include <stdio.h>
#include <stdlib.h>

/*
	10) Fa�a um programa que, dado tr�s valores a, b e c, verifique se eles podem ser os comprimentos
	dos lados de um tri�ngulo. Caso positivo, seu programa deve informar tamb�m se o tri�ngulo �
	equil�tero, is�sceles ou escaleno. Caso contr�rio, seu programa deve escrever a mensagem �N�o
	formam um tri�ngulo�.
*/

int main() {
	
		float ladoA;
		float ladoB;
		float ladoC;
	
        printf("insira um lado para o triangulo:?");
        scanf("%f",&ladoA);

        printf("insira um lado para o triangulo:?");
        scanf("%f",&ladoB);

        printf("insira um lado para o triangulo:?");
        scanf("%f",&ladoC);

        if((ladoA == ladoB) && (ladoA == ladoC) && (ladoB == ladoC)){
            printf("e um triangulo EQUILATERO.");
        } else if(ladoA == ladoB){
            printf("e um triangulo ISOSCELES.");
        } else if (ladoA != ladoB && ladoA != ladoC && ladoB != ladoC) {
            printf("e um ESCALENO.");
        } else {
        	printf("Nao formam um triangulo.");
		}
	return 0;
}
