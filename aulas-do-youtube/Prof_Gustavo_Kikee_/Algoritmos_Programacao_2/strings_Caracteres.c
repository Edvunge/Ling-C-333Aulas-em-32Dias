#include <stdio.h>
#include <stdlib.h>

int main(void){
    // declaraçoes 
    char nome[50];
    int i;

    // usuario informa o nome
    printf("Digite um nome: \n");
    scanf("%s",&nome);

    for(i = 0; i < 50; i++){
        printf("%c\n",nome[i]);

        if(nome[i]=='\0') {
            break;
        }

        if(nome[i] == 'a') {
            printf("tem um a na posicao %d",i);
        }
    }

    printf("Nome: %s\n",nome);
    return (0);
}