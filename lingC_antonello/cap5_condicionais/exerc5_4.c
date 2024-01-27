#include <stdio.h>
#include <stdlib.h>

// 5.4) Escreva um programa que verifique a validade de 
// uma senha fornecida pelo suário. A senha válida é o número 1234. 
// Devem ser impressas as seguintes mensagens:

// ACESSO PERMITIDO caso a senha seja válida.
// ACESSO NEGADO caso a senha seja inválida.

int main(void) {
    int senha_valida = 1234, senha_digitada;

    printf("Insira a Sua Senha: ");
    scanf("%d",&senha_digitada);

    if(senha_valida == senha_digitada) {
       printf("\nACESSO PERMITIDO."); 
    } else {
        printf("\nACESSO NEGADO.");
    }
    return (0);
}