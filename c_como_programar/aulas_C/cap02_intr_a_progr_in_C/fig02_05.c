/* Figura 2.5: fig02_05.c
    Programa de adicao */
#include <stdio.h>

// função main inicia execução do programa
int main(void) {
    
    int inteiro1; // primeiro numero a ser informado pelo usuario
    int inteiro2; // segundo numero a ser informado pelo usuario
    int soma; // variavel em que a soma será mantida
    
    printf("Digite o primeiro inteiro\n"); // prompt
    scanf("%d",&inteiro1); // le um inteiro

    printf("Digite o segundo inteiro\n"); // prompt
    scanf("%d",&inteiro2); // le um inteiro

    soma = inteiro1 + inteiro2;// atribui o total a soma

    printf("A soma eh %d\n", soma);// print soma

    return 0;/* Indica que o programa foi concluido com sucesso
    fim da função main */
}