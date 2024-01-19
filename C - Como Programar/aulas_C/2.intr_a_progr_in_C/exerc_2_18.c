#include <stdio.h>
#include <stdlib.h>

/*
2.18 Comparando inteiros. Escreva um programa que
peça ao usuário que digite dois inteiros, obtenha os números
e depois imprima o maior número seguido das
palavras ‘é maior’. Se os números forem iguais, imprima
a mensagem “Esses números são iguais”. Use
apenas a forma de seleção única da instrução if que
você aprendeu neste capítulo.
*/

int main(void) {
    int num1, num2;

    printf("Digite dois numeros inteiros: \n");
    scanf("%d%d",&num1,&num2);

    if(num1 > num2) {
        printf("O %d eh o maior.\n",num1);
    } else if(num1 == num2){
        printf("%d, %d Esses numeros sao iguais\n",num1,num2);
    } else {
        printf("O numero %d eh maior\n",num2);
    } 
    return (0);
}