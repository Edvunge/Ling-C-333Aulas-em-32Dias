#include <stdio.h>
#include <stdlib.h>

/*
8) Elabore um programa que, dado o número do mês, 
indica quantos dias têm esse mês. 
Utilize para isso a estrutura de seleção switch.
Obs.: Considere fevereiro como tendo 28 dias
*/

int main(void) {
    int num;

    printf("Digite um numero correspondente ao mes (1 - 12)");
    scanf("%d",&num);

    switch (num) {
    case 1:
        printf("mes 01 - 31 Dias.\n");
        break;
    case 2:
        printf("mes 02 - 28 Dias.\n");
        break;
    case 3:
        printf("mes 03 - 31 Dias.\n");
        break;
    case 4:
        printf("mes 04 - 30 Dias.\n");
        break;
    case 5:
        printf("mes 05 - 31 Dias.\n");
        break;
    case 6:
        printf("mes 06 - 31 Dias.\n");
        break;
    case 7:
        printf("mes 07 - 30 Dias.\n");
        break;
    case 8:
        printf("mes 08 - 31 Dias.\n");
        break;
    case 9:
        printf("mes 09 - 30 Dias.\n");
        break;
    case 10:
        printf("mes 05 - 31 Dias.\n");
        break;
    case 11:
        printf("mes 05 - 30 Dias.\n");
        break;
    case 12:
        printf("mes 05 - 31 Dias.\n");
        break;
    default:
        printf("Mes Invalido!");
        break;
    }
    return 0;
}