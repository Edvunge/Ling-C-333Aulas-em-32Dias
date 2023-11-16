#include <stdio.h>
#include <stdlib.h>

/*
4) Faça um programa que some os números ímpares entre 1 e 1000 e imprima a resposta.
Restrição:
→ O bloco de repetição deve executar no máximo 500 vezes.
*/
int main(void) {
    int soma = 0;
    
    for(int i = 0; i <= (500*2) ;i++) {
        if (i % 2 != 0) {
            soma += i;
        }
    }
    printf("o resultado e: %d",soma);
    return 0;
}