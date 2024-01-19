#include <stdio.h>
#include <stdlib.h>

/*
2.16 Aritmética. Escreva um programa que peça ao usuário
que digite dois números, obtenha esses números e
imprima a soma, o produto, a diferença, o quociente e o
módulo (resto da divisão).
*/

int main(void) {
    int num1,  num2;

    printf("Digite dois numeros inteiros: \n");
    scanf("%d%d",&num1,&num2);

    printf("a soma de %d + %d = %d\n",num1,num2,num1+num2);
    printf("o produto de %d * %d = %d\n",num1,num2,num1*num2);
    printf("a diferenca de %d - %d = %d\n",num1,num2,num1-num2);
    printf("o divisao de %d / %d = %d\n",num1,num2,num1/num2);
    printf("o quociente de %d %% %d = %d\n",num1,num2,num1%num2);

    return (0);
}