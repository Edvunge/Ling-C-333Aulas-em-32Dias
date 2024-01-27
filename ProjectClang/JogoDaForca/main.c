#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// funções
void forca(int estado){
    if(estado==0){
        printf("\n-------------");
        printf("\n|           |");
        printf("\n|");
        printf("\n|");
        printf("\n|");
        printf("\n|");
        printf("\n|");
        printf("\n-");
    } else if(estado == 1){
        printf("\n-------------");
        printf("\n|           |");
        printf("\n|           0");
        printf("\n|");
        printf("\n|");
        printf("\n|");
        printf("\n|");
        printf("\n-");
    } else if(estado == 2){
        printf("\n-------------");
        printf("\n|           |");
        printf("\n|           0");
        printf("\n|           |");
        printf("\n|");
        printf("\n|");
        printf("\n|");
        printf("\n-");
    } else if(estado == 3){
        printf("\n-------------");
        printf("\n|           |");
        printf("\n|           0");
        printf("\n|          -|");
        printf("\n|           ");
        printf("\n|");
        printf("\n|");
        printf("\n-");
    } else if(estado == 4){
        printf("\n-------------");
        printf("\n|           |");
        printf("\n|           0");
        printf("\n|          -|-");
        printf("\n|           ");
        printf("\n|");
        printf("\n|");
        printf("\n-");
    } else if(estado == 5){
        printf("\n-------------");
        printf("\n|           |");
        printf("\n|           0");
        printf("\n|          -|-");
        printf("\n|          /");
        printf("\n|");
        printf("\n|");
        printf("\n-");
    } else if(estado == 6){
        printf("\n-------------");
        printf("\n|           |");
        printf("\n|           0");
        printf("\n|          -|-");
        printf("\n|          / \\");
        printf("\n|");
        printf("\n|    Perdeu o Game!");
        printf("\n-");
    }
}

int main(void) { 
    char p_sec[100]; // palavra secreta
    
    printf("JOGADOR 1:\n");
    printf("Palavra Secreta: ");
    fgets(p_sec, 100, stdin);

    printf("A palavra secreta eh: %s", p_sec);
    printf("A palavra tem %lu caracteres", strlen(p_sec)-1);
    
    for(int i = 0; i < 30; i++){
        printf("\n");
    }

    p_sec[strlen(p_sec)-1]='\0';

    char p_tela[100]; // palavra para tela
    strcpy(p_tela, p_sec);
    // retira o ultimo caractere de p_tela, devido a captura ser com 
    // fgets()

    // substitui letras por '_'
    for(int i = 0; i < strlen(p_tela); i++){
        p_tela[i] = '_';
    }
    
    int erros = 0;

    while (1) {
        //imprimir a forca
        forca(erros);
        //imprimir os underlines
        //'_' para cada letra da palavra secreta
        printf("\nAdvinhe: ");
        for(int i = 0; i < strlen(p_tela);i++){
            printf("%c ", p_tela[i]);
        }

        // recebe a letra 
        printf("\nLetra: ");
        char letra;
        scanf(" %c", &letra);
        
        // se letra correta atualiza palavra na tela
        // verifica se a letra esta correta 
        int sera_que_errou = 1; // 1=sim e 0=nao
        for(int i = 0; i < strlen(p_tela); i++){
            if(letra == p_sec[i]){//certo
                p_tela[i] = letra;
                sera_que_errou = 0;
            }
        }

        // senao, incrementa erros
        if(sera_que_errou == 1){
            erros++;
        }
        // verifica se o jogo acabou 
        // verifica se ganhou 
        // verifica se p_sec é igual a p_tela
        if( strcmp(p_tela,p_sec)==0){
            // entao ganhou
            printf("\nVOCE ACERTOU A PALAVRA: ");
            for(int i = 0; i < strlen(p_tela);i++){
                printf("%c ", p_tela[i]);
            }

            printf("\nVENCEU! PARABENS!!!");
            printf("\nYOU WIN!");
            break;
        }

        // verifica se perdeu
        if(erros==6){
            //perdeu
            forca(erros);
            break;
        }
    }
    return 0;
}