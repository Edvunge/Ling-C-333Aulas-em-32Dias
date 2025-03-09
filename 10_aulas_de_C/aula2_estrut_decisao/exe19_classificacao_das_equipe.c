#include <stdio.h>
#include <stdlib.h>

/*
19. Em um campeonato nacional de arco-e-flecha, tem-se equipes de três jogadores
para cada estado. Sabendo-se que os arqueiros de uma equipe não obtiveram o
mesmo número de pontos, criar um programa em C que informe se uma equipe
foi classificada, de acordo com a seguinte especificação:

• Ler os pontos obtidos por cada jogador da equipe;

• Mostrar esses valores em ordem decrescente;

• Se a soma dos pontos for maior do que 100, imprimir a média aritmética
entre eles, caso contrário, imprimir a mensagem "Equipe desclassificada".
*/

// Função para ordenar um array em ordem decrescente usando o algoritmo de seleção
void ordenarDecrescente(int array[], int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        int indiceMaximo = i;
        for (int j = i + 1; j < tamanho; j++) {
            if (array[j] > array[indiceMaximo]) {
                indiceMaximo = j;
            }
        }
        if (indiceMaximo != i) {
            // Trocar os elementos
            int temp = array[i];
            array[i] = array[indiceMaximo];
            array[indiceMaximo] = temp;
        }
    }
}

int main(void){
     
    int pontos[3];  // Array para armazenar os pontos de cada jogador
    int somaPontos = 0;

    // Solicita ao usuário que insira os pontos de cada jogador
    printf("Digite os pontos do jogador 1: ");
    scanf("%d", &pontos[0]);
    
    printf("Digite os pontos do jogador 2: ");
    scanf("%d", &pontos[1]);
    
    printf("Digite os pontos do jogador 3: ");
    scanf("%d", &pontos[2]);

    // Ordena os pontos em ordem decrescente
    ordenarDecrescente(pontos, 3);

    // Calcula a soma dos pontos
    somaPontos = pontos[0] + pontos[1] + pontos[2];

    // Exibe os pontos em ordem decrescente
    printf("Pontos em ordem decrescente: %d, %d, %d\n", pontos[0], pontos[1], pontos[2]);

    // Verifica se a equipe foi classificada
    if (somaPontos > 100) {
        float media = (float)somaPontos / 3;  // Calcula a média
        printf("A equipe foi classificada. Media dos pontos: %.2f\n", media);
    } else {
        printf("Equipe desclassificada.\n");
    }

    return (0);
}