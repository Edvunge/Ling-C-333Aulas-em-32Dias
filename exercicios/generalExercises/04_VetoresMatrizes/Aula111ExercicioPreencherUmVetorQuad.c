#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
	Aula 111:  Exercicio 01
	1) Fa�a um programa que preencha um vetor de inteiros de tamanho 10 pedido
	valores ao usuario. Em seguida, calcule e salve num segundo vetor o
	quadrado de cada elemento do primeiro vetor. Por fim, imprima os dois vetores.
*/

int main() {

    // cria��o das vari�veis
    int i, vete1[10], vete2[10];

    // repeti��o para ler valores do teclado
    for(i = 0; i < 10; i++){
        printf("Digite o valor da posicao %d: ", i);
        scanf("%d", &vete1[i]);
    }

    // repeti��o para realizar a multiplica��o
    for(i = 0; i < 10; i++) {
        vete2[i] = vete1[i] * vete1[i];
	}
	
    // impress�o do vetor 1 na tela
    printf("\nVetor 1: ");
    for(i = 0; i < 10; i++){
        printf("%3d ", vete1[i]);
	}
	
    // impress�o do vetor 2 na tela
    printf("\nVetor 2: ");
    for(i = 0; i < 10; i++){
        printf("%3d ", vete2[i]);
	}
    return 0;
}
