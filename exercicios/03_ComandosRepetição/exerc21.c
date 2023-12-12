#include <stdio.h>
#include <stdlib.h>

/*
21. Faca um programa que receba dois numeros. Calcule e mostre:
    
    1* a soma dos numeros pares desse intervalo de numeros, 
        incluindo os numeros digitados;
    
    2* a multiplicacao dos numeros ımpares desse intervalo, 
        incluindo os digitados;
*/

int main(void) {
    int numb1 = 0, numb2 = 0, soma = 0, j = 0, multply = 0;

    printf("Digite 2 valores: \n");
    scanf("%d%d",&numb1 ,&numb2);

    // 1 - soma dos pares
    if(numb1 > numb2) {
        for( j = numb2; j < numb1; j++) {
            if(numb1 % 2 == 0 && numb2 % 2 == 0) {
                soma = numb1 + numb2;
                printf("Soma: %d\n",soma);                
            }
        }
    } else {
        for( j = numb1; j < numb2; j++) {
            if(numb1 % 2 == 0 && numb2 % 2 == 0) {
                soma = numb1 + numb2;
                printf("Soma: %d\n",soma);
            }
        }
    }

    // 2 - multply impares
    
    if(numb1 > numb2) {
        for( j = numb2; j < numb1; j++) {
            if(numb1 % 2 != 0 && numb2 % 2 != 0) {
                multply = (numb1 * numb2);
                printf("A Multply: %d\n",multply);
            }
        }
    } else {
        for( j = numb1; j < numb2; j++) {
            if(numb1 % 2 != 0 && numb2 % 2 != 0) {
                multply = (numb1 * numb2);
                printf("A Multply: %d\n",multply); 
            }
        }
    }
    return (0);
}