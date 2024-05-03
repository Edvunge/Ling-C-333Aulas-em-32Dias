#include <stdio.h>
#include <stdlib.h>
/*
2.3 Escreva uma única instrução C para executar cada uma
das seguintes alternativas:
*/

int main(void)
{
    // a) Declarar as variáveis c, estaVariável, q76354
    // e número para que tenham o tipo int.
    int c, estaVariavel, q76354, numero;

    // b) Pedir que o usuário digite um inteiro. Terminar a mensagem
    // com um sinal de dois pontos (:) seguido por um
    // espaço, e deixar o cursor posicionado após o espaço.
    printf("Digite um numero inteiro: ");

    // c) Ler um inteiro do teclado e armazenar o valor digitado
    // na variável inteira a.
    int a;

    printf("Digite um inteiro: ");
    scanf("%d", &a);

    // d) Se o número não for igual a 7, exibir “A variável
    // número não é igual a 7”.
    if (a == 7) {
        printf("A variavel numero nao e igual a 7");
    }

    // e) Imprimir a mensagem “Este é um programa
    // em C.” em uma linha.
    printf("Este e um programa em C.");
    
    // f) Imprimir a mensagem “Este é um programa
    // em C.” em duas linhas, de modo que a primeira
    // linha termine em C.
    printf("Este e um programa \nem C.");

    // g) Imprimir a mensagem “Este é um programa
    // em C.” com cada palavra em uma linha separada.
    printf("\nEste\n e \num \nprograma \nem \nC.");
    
    /*
    h) Imprimir a mensagem “Este é um programa
    em C.” com as palavras separadas por tabulações.
    */
    printf("Este e um programa em C.\n");
    return (0);
}