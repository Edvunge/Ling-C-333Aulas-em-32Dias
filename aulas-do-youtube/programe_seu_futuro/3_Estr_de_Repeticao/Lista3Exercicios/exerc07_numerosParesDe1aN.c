#include <stdio.h>
#include <stdlib.h>

/*
7) Leia um valor inteiro N. 
Apresente o quadrado de cada um dos valores pares, de 1 até N,
inclusive N, se for o caso.
*/


int main(void) {
    int j, n, quadrad = 0;

    printf("Digite um valor: \n");
    scanf("%d",&n);

    for(j = 1; j <= n; j++) {
        if(j % 2 == 0) {
            quadrad = (j*j);
            printf("O Quadrd do %d e %d\n",j ,quadrad);
        }
    } 
/*  int i;
    float num, metade;

    for(i = 1; i < 10; i++) {
        printf("informe o numero: ");
        scanf("%f",&num);
        metade = (num/2);
        printf("A metade do %f e %f",num ,metade);
    }*/
    return 0;
}
