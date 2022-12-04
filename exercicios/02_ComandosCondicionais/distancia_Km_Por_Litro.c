#include <stdio.h>
#include <stdlib.h>
/*
	26. Leia a distancia em Km e a quantidade de litros de gasolina consumidos por um carro
	em um percurso, calcule o consumo em Km/l e escreva uma mensagem de acordo com
	a tabela abaixo:

	a) menor que 8 printf("Venda o carro!"); <
	b) entre 8 e 14 printf("Economico!"); 
	c) maior que 12 printf("Super Economico!");
*/

int main() {
	float km, litro;
	
	printf("Insira distancia em Km:?");
    scanf("%f",&km);
    
    printf("Insira quantidade de litros de gasolina consumidos:?");
    scanf("%f",&litro);
    
    float consumo = ( km / litro );
    
	if (consumo < 8){ 
		printf("Venda o carro!");	
	} else if (consumo >= 8 && consumo <= 14) {
		printf("Economico!");
	} else if (consumo > 12) {
		printf("Super Economico!");
	}
    
	return 0;
}
