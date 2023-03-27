#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
	Aula 113: Exercicio 03.   Escrever um programa que lê um vetor N de tamanho 20 e o imprime na tela. 
	Em seguida, troque o 1º elemento com o último, o 2ª com o penúltimo, 
	... até o 10ª com o 11º. Imprima o vetor N modificado.
*/

int main() {

    int a, fim = 19, copia, vetor[20];

    // lê valores do teclado e salva no vetor
    for(a = 0; a < 20; a++){
        printf("digite %d: ", a);
        scanf("%d", &vetor[a]);
    }

    // imprime o vetor lido
    printf("\nVetor original: ");
    for(a = 0; a < 20; a++){
        printf("%2d ", vetor[a]);
    }

    // faz a troca dos elementos do vetor
    for(a = 0; a < 10; a++){
        copia = vetor[a];
        vetor[a] = vetor[fim];
        vetor[fim] = copia;
        fim--;
    }

    // imprime o vetor novamente (agora modificado)
    printf("\nVetor modificado: ");
    for(a = 0; a < 20; a++){
        printf("%2d ", vetor[a]);
    }

    return 0;
}
