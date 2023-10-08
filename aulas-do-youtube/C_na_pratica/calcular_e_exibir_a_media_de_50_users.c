#include <stdio.h>
#include <stdlib.h>

// ler 50 numeros fornecidos pelo usuario, calcular e exibir a sua media:

int main(void){
    int num, cont = 0; 
    float soma;

    do
    {
        printf("\n digite o valor do %dº valor: ",cont+1);
        scanf("%d", &num);

        soma += num;
        cont++;
    } while (cont <= 50);

    float media = soma/cont;

    printf("\no valor da media %.2f",media); 
    return (0);
}