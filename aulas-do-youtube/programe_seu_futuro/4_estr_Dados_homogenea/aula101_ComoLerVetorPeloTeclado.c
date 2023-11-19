#include <stdio.h>
#include <stdlib.h>

// Aula 101: Como preencher um vetor pelo teclado?

int main(void) {
    int j;
    int num2[7]; 
    
    for(j = 0; j < 7; j++) {
        printf("Digite o %d posicao: ",j);
        scanf("%d",&num2[j]);
    }

    printf("\n");
    for(j = 0; j < 7; j++){
        printf("%d ",num2[j]);
    }
    return (0);
}