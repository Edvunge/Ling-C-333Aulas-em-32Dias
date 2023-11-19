#include <stdio.h>
#include <stdlib.h>

/*
1) Faça um programa que preencha um vetor de inteiros de tamanho 10, 
pedindo valores ao usuário.
Em seguida, calcule e salve num segundo vetor o quadrado de 
cada elemento do primeiro vetor. 
Por fim, imprima os dois vetores.
*/

int main(void) {
    int j, vet[10], vet2[10];
    
    // vetor 1
    for(j = 0; j < 3; j++){
        printf("Digite o elemento da posicao %d: ",j);
        scanf("%d",&vet[j]);

        vet2[j] = vet[j] * vet[j];
    }

    printf("\n");
    printf("vetor 1 - ");
    // vetor 1
    for(j = 0; j < 3; j++){
        printf("%d ",vet[j]);
    }

    printf("\n");
    printf("vetor 2 - ");
    // vetor 2
    for(j = 0; j < 3; j++){
        printf("%d ",vet2[j]);
    }
    return (0);
}