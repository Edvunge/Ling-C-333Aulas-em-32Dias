#include <stdio.h>
#include <stdlib.h>
/*
Fácil19. Faça um Programa que leia 2 números e em seguida pergunte ao usuário qual operação ele deseja realizar. 
O resultado da operação deve ser acompanhado de uma frase que diga se o número e:

Par ou ímpar;
Positivo ou negativo;
*/
int main(){
    int num1 = 0, num2 = 0;
    char op;

    printf("Digite um numero:?");
    scanf("%d",&num1);

    printf("\nDigite um outro numero:?");
    scanf("%d",&num2);

    printf("\nQual operacao deseja realizar: ");
    printf("\nPar ou Impar / digite : P");
    printf("\nNegativo ou Positivo / digite : N\n");
    scanf("%s",&op);

    if(op == 'P'){
        if( (num1 % 2 == 0) && (num2 % 2 == 0) ){
            printf("\nNumero %d : PAR",num1);
            printf("\nNumero %d : PAR",num2);
        } else if( (num1 % 1 != 0) && (num2 % 2 == 0) ){
            printf("\nNumero %d : IMPAR",num1);
            printf("\nNumero %d : PAR",num2);
        } else if( (num1 % 2 == 0) && (num2 % 1 != 0) ){
            printf("\nNumero %d : PAR",num1);
            printf("\nNumero %d : IMPAR",num2);
        } else {
            printf("\nNumero %d : IMPAR",num1);
            printf("\nNumero %d : IMPAR",num2);
        }
    } else if(op == 'N'){
        if( (num1 > 0) && (num2 > 0) ){
            printf("\nO numero %d : POSITIVO",num1);
            printf("\nO numero %d : POSITIVO",num2);
        } else if( (num1 < 0) && (num2 > 0) ){
            printf("\nO numero %d : NEGATIVO",num1);
            printf("\nO numero %d : POSITIVO",num2);
        } else if( (num1 > 0) && (num2 < 0) ){
            printf("\nO numero %d : POSITIVO",num1);
            printf("\nO numero %d : NEGATIVO",num2);
        } else {
            printf("\nO numero %d : NEGATIVO",num1);
            printf("\nO numero %d : NEGATIVO",num2);
        }
    }
    return 0;
}