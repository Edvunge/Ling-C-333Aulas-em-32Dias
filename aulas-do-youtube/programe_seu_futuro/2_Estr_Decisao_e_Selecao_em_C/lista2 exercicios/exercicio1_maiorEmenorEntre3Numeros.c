#include <stdio.h>
#include <stdlib.h>
/* 
1) Escreva um programa em C que leia três valores e 
apresente qual é o maior e qual é o menor
*/
int main(void) {
    int num1, num2, num3, maior = 0 , menor = 0;

    printf("Digite o primeiro valor: \n");
    scanf("%d",&num1);

    printf("Digite o segundo valor: \n");
    scanf("%d",&num2);

    printf("Digite o primeiro valor: \n");
    scanf("%d",&num3);

    if( (num1 > num2 && num1 > num3) && (num2 > num3) ) {
        maior = num1;
        menor = num3;
        printf("O maior valor e: %d\n",maior);
        printf("O menor valor e: %d\n",menor);
    } else 
        if( (num2 > num1 && num2 > num3) && (num1 > num3) ) {
            maior = num2;
            menor = num3;
            printf("O maior valor e: %d\n",maior);
            printf("O menor valor e: %d\n",menor);
    } else 
        if( (num3 > num2 && num3 > num1) && (num2 > num1) ) {
            maior = num3;
            menor = num1;
            printf("O maior valor e: %d\n",maior);
            printf("O menor valor e: %d\n",menor);
    } else 
        if( (num3 > num2 && num3 > num1) && (num1 > num2) ) {
            maior = num3;
            menor = num2;
            printf("O maior valor e: %d\n",maior);
            printf("O menor valor e: %d\n",menor);
    }
    return 0;
}