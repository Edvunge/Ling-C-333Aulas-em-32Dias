#include <stdio.h>
#include <stdlib.h>

/*
20. Dados tres valores, A, B, C, verificar se eles podem ser valores dos lados de um triangulo
e, se forem, se e um triangulo escaleno, equilatero ou isosceles, considerando os seguintes
conceitos:
	 O comprimento de cada lado de um triangulo e menor do que a soma dos outros
		dois lados.
	 Chama-se equilatero o triangulo que tem tres lados iguais.
	 Denominam-se isosceles o triangulo que tem o comprimento de dois lados iguais.
	 Recebe o nome de escaleno o triangulo que tem os tres lados diferentes.
*/

int main() {
	
		float ladoB, ladoA, ladoC;
	
		printf("insira o primeiro lado para o triangulo:?");
        scanf("%f",&ladoA );
        
        printf("insira o primeiro lado para o triangulo:?");
        scanf("%f",&ladoB );
        
        printf("insira o primeiro lado para o triangulo:?");
        scanf("%f",&ladoC );

        if((ladoA == ladoB) && (ladoA == ladoC) && (ladoB == ladoC)){
            printf("e um triangulo EQUILATERO.");
        } else if(ladoA == ladoB){
            printf("e um triangulo ISOSCELES.");
        } else if (ladoA != ladoB && ladoA != ladoC && ladoB != ladoC) {
            printf("e um ESCALENO.");
        }
	return 0;
}
