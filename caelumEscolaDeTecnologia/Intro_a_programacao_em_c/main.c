#include <stdio.h>

int main(void){
    printf("************************************\n");
    printf("* Bem vindo ao Jogo de Adivinhacao *\n");
    printf("************************************\n");
    
    int numeroSecreto;
    numeroSecreto = 42;

    // imprimindo somente o numero
    printf("%d", 42);

    // no meio da frase
    printf("o numero %d e secreto!\n",numeroSecreto);


    int chute;

    printf("Qual e o seu chute? \n");
    scanf("%d",&chute);

    printf("Seu chute foi %d!\n", chute);

    int acertou = chute == numeroSecreto;

    if (acertou) {
        printf("Parabens! Voce Acertou!\n");
    } else {

        printf("Acertou: %d\n", acertou);
        
        int maior = chute > numeroSecreto;
        
        if (maior) {
            printf("Seu chute foi maior do que o numero secreto!\n");
        } else (chute < numeroSecreto){
            printf("Seu chute foi maior do que o numero secreto!\n");
        }
    }
    return (0);
}