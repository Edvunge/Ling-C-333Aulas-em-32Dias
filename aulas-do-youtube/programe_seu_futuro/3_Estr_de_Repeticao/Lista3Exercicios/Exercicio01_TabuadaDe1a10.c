#include <stdio.h>
#include <stdlib.h>

int main(void) {     
    int num;

    printf("Digite um valor inteiro entre 1 e 10: ");
    scanf("%d", &num);

    for(int i = 1; i <= 12; i++) {
        printf("\n%d X %d = %d",num ,i ,i*7);
    }
/*
1) Elabore um programa em C para ler do teclado um 
valor inteiro entre 1 e 10 e apresentar a tabuada, Exemplo:

Entrada 7

Saída:
7 * 1 = 7
7 * 2 = 14
7 * 3 = 21
7 * 4 = 28
7 * 5 = 35
7 * 6 = 42
7 * 7 = 49
7 * 8 = 56
7 * 9 = 63
7 * 10 = 70
*/
    return (0);
}
