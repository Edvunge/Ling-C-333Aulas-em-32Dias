#include <stdio.h>
#include <stdlib.h>

/*
    4. Faça um algoritmo que leia uma quantidade não determinada
    de numeros posivitos, calcule a quantidade de numeros pares e impares,
    a media de valores pares e a media geral dos numeros lidos.
    A leitura dos numeros será encerrada
    caso seja informado algum numero menor ou igual a zero.
*/

int main(void){

    int numero, qtdPares=0, qtdImpares=0, qtdGeral=0;
    int somaPares=0, somaGeral=0;
    float mediaPares, mediaGeral;

    do {
        printf("Informe o numero: ");
        scanf("%d", &numero);

        if(numero > 0) {
            qtdGeral++;
            somaGeral = somaGeral + numero;

            if(numero % 2 == 0){
                qtdPares++;
                somaPares = somaPares + numero;
            } else {
                qtdImpares++;
            }
        }
    } while(numero > 0);

    mediaGeral = (float)somaGeral / (float)qtdGeral;
    mediaPares = (float)somaPares / (float)qtdPares;

    printf("Quantidade de Pares: %d\n", qtdPares);
    printf("Quantidade de Impares: %d\n", qtdImpares);

    printf("Media de pares: %.2f\n", mediaPares);
    printf("Media geral: %.2f\n", mediaGeral);

    return (0);
}