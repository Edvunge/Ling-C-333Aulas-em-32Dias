#include <stdio.h>
#include <stdlib.h>

/*
2. Desenvolva uma calculadora simples que realize 
as quatro operações básicas
*/

int main(void) {
    int num1, num2, n;
    char option;
    char buffer[15];

    printf("Digite um numero1: \n");
    fgets(buffer, sizeof(buffer), stdin);
    num1 = atoi(buffer);

    printf("Digite um numero2: \n");
    fgets(buffer, sizeof(buffer), stdin);
    num2 = atoi(buffer);

    do {
        printf("\nEscolha uma opcao: +, -, /, *: ");
        scanf(" %c", &option); 

        switch (option) {
            case '+':
                printf("\nSoma: %d\n", num1 + num2);
                break;

            case '-':
                if (num1 > num2) { 
                    printf("\nSubtracao: %d\n", num1 - num2);
                    break;
                } else {
                    printf("\nSubtracao: %d\n", num2 - num1);
                    break;
                }

            case '*':
                printf("\nMultiplicacao: %d\n", num1 * num2);
                break;

            case '/':
                if (num2 == 0) {
                    printf("\nErro: Divisao por zero nao permitida!\n");
                } else {
                    printf("\nDivisao: %d\n", num1 / num2);
                }
                break;

            default:
                printf("\nOpcao invalida!\n");
                break;
        }

        printf("\nQUER CONTINUAR A OPERACAO? (0 = sair, 1 = continuar): ");
        while (scanf("%d", &n) != 1) { 
            printf("Entrada invalida! Digite 0 para sair ou 1 para continuar: ");
            while (getchar() != '\n'); 
        }
    } while (n != 0);
    return 0;
}