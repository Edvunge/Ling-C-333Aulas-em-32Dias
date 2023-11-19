#include <stdio.h>
#include <stdlib.h>

/*
4) Faça um programa que leia 10 números reais e 
os armazene em um vetor. Em seguida, leia um
código inteiro e faça uma das ações abaixo:
0 – finaliza o programa;
1 – imprime o vetor na ordem do início ao fim;
2 – imprime o vetor na ordem inversa (do fim para o início).
O programa deve funcionar até que o usuário digite 0 para finalizar.
*/

// variaveis globais
float vet[10];
int escolha, j;

// prototipo de funções
void inverterArray();

int main(void) {
    // ler 10 valores digitados pelo user:
    for(j = 0; j < 10; j++) {
        printf("Digite o elemt %d do vetor: ",j);
        scanf("%f", &vet[j]);
    }

    do {     
        printf("\nDigite um numr de acordo accao desejada: \n");
        printf("0 - finaliza o programa.\n");
        printf("1 - imprime o vetor na ordem do inicio ao fim\n");
        printf("2 - imprime o vetor na ordem inversa\n");
        scanf("%d",&escolha);

        switch(escolha){
            case 0: // finalizar o programa
                exit(0);
            break;
            case 1: // imprimir o vetor na tela
                for(j = 0; j < 10; j++) {
                    printf(" %.1f ",vet[j]);
                }
            break;
            case 2: 
                inverterArray();                
            break;
            default:
                printf("Opccao Indisponivel.\n");
        }
    } while(escolha != 0);
    return (0);
}

// Inverter o vetor, do fim para o início
void inverterArray(){
    // Troca os elementos
    for(j = 0; j < 5; j++) {
        float temp = vet[j];
        vet[j] = vet[9 - j];
        vet[9 - j] = temp;
    }

    // Imprime o vetor modificado
    printf("\nVetor Modificado: ");
    for(j = 0; j < 10; j++){
        printf(" %.1f ", vet[j]);
    }
}