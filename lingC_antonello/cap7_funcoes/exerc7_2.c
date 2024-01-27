#include <stdio.h>
#include <stdlib.h>

// 7.2) Escreva uma função que receba dois números inteiros 
// retorne o menor número.

int functionMenor(int num1, int num2){
    int menor = 0;

    if(num1 > num2) {
        menor = num2;
        return printf("O menor eh: %d ",menor);
    } else {
        menor = num1;
        return printf("O menor eh: %d ",menor);
    }
}

int main(void) {
    functionMenor(28, 153);    
    return (0);
}