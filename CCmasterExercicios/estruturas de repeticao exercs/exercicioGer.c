#include <stdio.h>
#include <stdlib.h>

int main(void){
    // Escreva um programa em C que imprima os números de 1 a 10 usando um loop "while".
    int i = 1;
    int soma = 0;
    /*while(i <= 10){
        printf("%d\n",i);
        i++;
    }*/


    // ###################################################
    // Escreva um programa em C que calcule a soma dos números de 1 a 100 usando um loop "for".
    /*for(i; i <= 100; i++){
        soma += i;
    }
    printf("a soma dos numeros de 1 a 100e: %d",soma);*/
    // Iniciamos a variável 'soma' com o valor 0.
    // Usamos o loop "for" para percorrer os números de 1 a 100, somando cada número na variável 'soma'.
    // Imprimimos na tela a soma dos números de 1 a 100.


    // ###################################################
    // Escreva um programa em C que solicite ao usuário um número e imprima a tabuada deste número usando um loop "for".
    int num;

    printf("Insira um numero para calcular a tabuada: ");
    scanf("%d",&num);

    for(i ; i < 12; i++){
        printf("%d X %d = %d\n",i ,num ,i*num);
    }
    return 0; 
}