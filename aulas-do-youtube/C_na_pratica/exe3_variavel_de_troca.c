#include <stdio.h>
#include <stdlib.h>

/*
----------------------
3. Escreva um algoritmo que armazene o valor 10 em uma variavel A e o valor 20 em uma variavel B.
A seguir (uilizando apenas atribuições entre variaveis) , 
    crie uma forma de trocar os seus conteudos fazendo com que o valor que está em A passe para B e 
    vice-versa. ao final, mostrar os valores que ficaram armazenadas nas variaveis.
----------------------
*/

int main(void){
    int a = 10, b = 20 ,c;

    printf("\nO valor de A = %d",a);
    printf("\nO valor de B = %d",b);
    printf("\n ");

    // calculo da troca de valores.
    c = a;
    a = b;
    b = c;

    printf("\nO valor de A = %d",a);
    printf("\nO valor de B = %d",b);
    printf("\n ");

    return (0);
}