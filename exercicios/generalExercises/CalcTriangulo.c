#include <stdio.h>
#include <stdlib.h>

/*
	10) Faça um programa que, dado três valores a, b e c, verifique se eles podem ser os comprimentos
	dos lados de um triângulo. Caso positivo, seu programa deve informar também se o triângulo é
	equilátero, isósceles ou escaleno. Caso contrário, seu programa deve escrever a mensagem “Não
	formam um triângulo”.
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
