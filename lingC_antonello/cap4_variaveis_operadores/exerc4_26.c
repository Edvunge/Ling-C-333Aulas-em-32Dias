#include <stdio.h>
#include <stdlib.h>

// 4.26) Faça um programa para ler dois números inteiros, x e y, 
// e imprimir o quociente e o resto da divisão inteira entre eles. 
// Utilize variáveis inteiras.

int main(void) {
    int x, y;

    printf("Digite o primeiro numero: ");
    scanf("%d",&x);

    printf("Digite o segundo numero: ");
    scanf("%d",&y);

    float quociente = (float) x / y;
    float restoDaDivisao = quociente - ((int) quociente) * y;

    printf("o valor eh de: %.2f ", restoDaDivisao);
    return (0);
}