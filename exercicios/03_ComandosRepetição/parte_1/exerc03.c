#include <stdio.h>
#include <stdlib.h>

/*
3. Faca um algoritmo utilizando o comando while 
que mostra uma contagem regressiva na tela, 
iniciando em 10 e terminando em 0. 
Mostrar uma mensagem “FIM!” apos a contagem.
*/

int main(void) {
    int m = 10;
    while (m > 0) {
        printf(" %d ",m);
        m--;
    }
    printf("\nFIM!\n");
    return (0);
}