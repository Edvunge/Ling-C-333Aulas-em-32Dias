/* Figura 2.13: fig02_13.c
Usando instruçoes if, operadores relacionais
e operadores de igualdade */

#include <stdio.h>

// função main inicia a execução do programa
int main(void) {
    int num1; // primeiro numero do usuario a ser lido
    int num2; // segundo  numero do usuario a ser lido

    printf("Entre com dois inteiros e eu lhe direi\n");
    printf("As relações que eles satisfazem: \n");

    scanf("%d%d",&num1,&num2);// le dois inteiros

    if (num1 == num2) {
        printf("%d eh igual a %d\n",num1, num2);
    }// fim do if
    
    if (num1 != num2) {
        printf("%d nao eh igual a %d\n",num1, num2);
    }// fim do if

    if (num1 < num2) {
        printf("%d e menor %d\n",num1, num2);
    }// fim do if
    
    if (num1 > num2) {
        printf("%d eh maior que %d\n",num1, num2);
    }// fim do if
    
    if (num1 <= num2) {
        printf("%d eh menor ou igual a %d\n",num1, num2);
    }// fim do if

    if (num1 >= num2) {
        printf("%d eh maior ou igual a %d\n",num1, num2);
    }// fim do if

    return 0; /* indica que o programa foi concluido com sucesso
    fim da função main */
}