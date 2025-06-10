#include <stdio.h>
#include <stdlib.h>

/*
2) Escreva um programa em C que lê 5 números inteiros, um por vez. 
Conte quantos destes valores são negativos e quantos são positivos. 
Ao final, imprima na tela a quantidade de números negativos 
e positivos.
*/

int main(void) {
    int num, num2, num3, num4, num5;
    int numNeg = 0, numPos = 0, quantddNeg = 0, quantddPos = 0;


    printf("Digite o primeiro numero: \n");
    scanf("%d", &num);

    printf("Digite o segundo numero: \n");
    scanf("%d", &num2);

    printf("Digite o terceiro numero: \n");
    scanf("%d", &num3);

    printf("Digite o quarto numero: \n");
    scanf("%d", &num4);

    printf("Digite o quinto numero: \n");
    scanf("%d", &num5);

    if( num < 0 && num2 < 0 && num3 > 0 && num4 > 0 && num5 > 0 ) {  
        printf("Dois numeros negativos e \nTres numeros positivos\n");
    } else if( num < 0 && num2 > 0 && num3 > 0 && num4 > 0 && num5 > 0 ){
        printf("Um numero negativo e \nQuatro numeros positivos\n");
    } else if( num > 0 && num2 > 0 && num3 > 0 && num4 > 0 && num5 > 0 ){
        printf("Zero numeros negativos e \nCinco numeros positivos\n");
    } else if( num < 0 && num2 < 0 && num3 < 0 && num4 > 0 && num5 > 0 ){
        printf("Tres numeros negativos e \nDois numeros positivos\n");
    } else if( num < 0 && num2 < 0 && num3 < 0 && num4 < 0 && num5 > 0 ){
        printf("Quatro numeros negativos e \nUm numero positivo\n");
    } else if( num < 0 && num2 < 0 && num3 < 0 && num4 < 0 && num5 < 0 ){
        printf("Cinco numeros negativos e \nZero numeros positivos\n");
    }   
    /*
    x, c, v, b, n:

    ( x < 0 && c < 0 && v > 0 && b > 0 && n > 0 ) // 2 - 3
        printf("Dois numeros negativos e \nTres numeros positivos\n"); 
    
    ( x < 0 && c > 0 && v > 0 && b > 0 && n > 0 ) // 1 - 4
    ( x > 0 && c > 0 && v > 0 && b > 0 && n > 0 ) // 0 - 5
    ( x < 0 && c < 0 && v < 0 && b > 0 && n > 0 ) // 3 - 2
    ( x < 0 && c < 0 && v < 0 && b < 0 && n > 0 ) // 4 - 1
    ( x < 0 && c < 0 && v < 0 && b < 0 && n < 0 ) // 5 - 0
    
    */
    return (0);
}