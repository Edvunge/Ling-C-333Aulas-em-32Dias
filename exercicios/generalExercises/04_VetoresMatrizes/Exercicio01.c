#include <stdio.h>
#include <stdlib.h>

/*
	Aula 111: Exercicio 01.  Faça um programa que preencha um vetor de inteiros de 
	tamanho 10 pedindo valores ao usuário. Em seguida, 
	calcule e salve num segundo vetor o quadrado de cada elemento do primeiro vetor. 
	Por fim, imprima os dois vetores.
*/

int main() {

    int i, vetor[10];
    
    // valores digitados pelo teclado
    for(i = 0; i < 10; i++){
    	printf("Digite o elemento da posicao %d: ", i);
    	scanf("%d",&vetor[i]);
	}
	
	// apresentaçao dos valores digitados pelo teclado.
	for(i = 0; i < 10; i++){
		printf("%2d ", vetor[i]);
	}
	
	printf("\n\n");
	
	for(i = 0; i < 10; i++){
    	vetor[i] = vetor[i] * vetor[i]; // Calculando o quadrado de cada elemento do vetor.
    	printf("%2d ", vetor[i]); // Apresentando, os valores calculados. 
	}
    return 0;
}
