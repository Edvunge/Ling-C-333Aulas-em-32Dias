#include <stdio.h>
#include <stdlib.h>

/*
60. Faça um programa que leia vários números, calcule e mostre:

(a) A soma dos números digitados
(b) A quantidade de números digitados
(c) A média dos números digitados
(d) O maior número digitado
(e) O menor número digitado
(f) A média dos números pares

Finalize a entrada de dados caso o usuário informe o valor 0.
*/

int main(void){
    int num = 1, soma;

    {
        printf("\nDigite um valor: ");
        scanf("%d", &num);
        
        soma = soma + num;
        num++;    
    } while (num != 0);
    
    printf("\nA soma dos numeros digitados: %d",soma);
    return (0);
}