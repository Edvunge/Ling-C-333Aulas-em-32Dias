#include <stdio.h>
#include <stdlib.h>

/*
25. A prefeitura contratou uma firma especializada para manter os níveis de poluição
considerados ideais para um país do 1º mundo. As indústrias, maiores responsá-
veis pela poluição, foram classificadas em três grupos. Sabendo-se que a escala
utilizada varia de 0,05 e que o índice de poluição aceitável é até 0,25, fazer um
programa que possa imprimir intimações de acordo com o índice e a tabela a
seguir:

Índice  ==========================  Indústrias que receberão intimação
0.3 ------------------------------- 1º gurpo
0.4 ------------------------------- 1º e 2º grupos
0.5 ------------------------------- 1º, 2º e 3º grupos
*/

int main() {
    float indicePoluicao;

    // Solicita ao usuário que insira o índice de poluição
    printf("Digite o índice de poluição (entre 0.05 e 0.25): ");
    scanf("%f", &indicePoluicao);

    // Verifica o índice e emite intimações de acordo com a tabela
    if (indicePoluicao > 0.25) {
        printf("Indústrias do 1º, 2º e 3º grupos receberão intimação.\n");
    } else if (indicePoluicao > 0.15) {
        printf("Indústrias do 1º e 2º grupos receberão intimação.\n");
    } else if (indicePoluicao > 0.05) {
        printf("Indústrias do 1º grupo receberão intimação.\n");
    } else {
        printf("Nenhuma intimação necessária. Poluição dentro dos limites aceitáveis.\n");
    }

    return 0;
}