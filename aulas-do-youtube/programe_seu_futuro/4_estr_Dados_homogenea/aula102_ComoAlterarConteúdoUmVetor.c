#include <stdio.h>
#include <stdlib.h>

// Aula 102: Como Alterar o conteudo de um vetor?

int main(void) {
    int j;
    int num2[3]; 
    
    // preencher cada posicao de um vetor
    for(j = 0; j < 3; j++) {
        printf("Digite o %d posicao: ",j);
        scanf("%d",&num2[j]);
    }

    // multiplicar um vetor por 3
    for(j = 0; j < 3; j++){
        num2[j] = num2[j] * 3; 
    }
    
    // imprimir na tela cada posição de um vetor
    printf("\n");
    for(j = 0; j < 3; j++){
        printf("%d ",num2[j]);
    }
    return (0);
}