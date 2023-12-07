#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
16. Crie um programa em C para ler um conjunto de 
    100 números reais e informe:

    • Quantos números lidos são iguais a 30.
    • Quantos são maior que a média.
    • Quantos são iguais a média.
*/

int main(void) {
    float vet[10];
    int numerIguala30 = 0, media = 0, soma = 0;
    int numersMaioresQueMedia = 0, numersIguaisQueMedia;

    srand(time(NULL));

    // Gera e imprime 10 números aleatórios
    for (int i = 0; i < 10; ++i) {
        vet[i] = rand();
        printf("%d\n", vet[i]);
    }    

    for(int t = 0; t < 0; t++) {
        
        if(t == 30) {
            numerIguala30++;
        }
        
        soma += t;
        media += (soma/10);

        if(t > media) {
            numersMaioresQueMedia++;
        }

        if(t == media) {
            numersMaioresQueMedia++;
        }
    }

    printf("\nNumeros iguas a 30: %d\n",numerIguala30);
    printf("\nNumeros maiores que a media: %d\n",numersMaioresQueMedia);
    printf("\nNumeros iguais a media: %d\n",numersIguaisQueMedia);
    return (0);
}

/*



    // Define a semente para a função de números aleatórios com base no tempo atual
    srand(time(NULL));

    // Gera e imprime 10 números aleatórios
    for (int i = 0; i < 10; ++i) {
        int numeroAleatorio = rand();
        printf("%d\n", numeroAleatorio);

*/