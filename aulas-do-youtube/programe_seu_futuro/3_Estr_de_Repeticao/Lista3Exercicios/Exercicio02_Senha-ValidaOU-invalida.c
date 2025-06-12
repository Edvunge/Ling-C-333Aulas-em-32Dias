#include <stdio.h>
#include <stdlib.h>

/*
2) Escreva um programa que repita a leitura de 
uma senha até que ela seja válida. 
Para cada leitura de senha incorreta informada, 
escrever a mensagem “Senha Invalida”. 
Quando a senha for informada corretamente deve ser impressa 
a mensagem “Acesso Permitido” e o programa deve ser encerrado. 
Considere que a senha correta é o valor 123456.
*/

int main(void) {
    int senha, senhaValida = 123456;

    do {
        printf("\nDigite a sua senha: ");
        scanf("%d", &senha);

        if (senha == senhaValida) {
            printf("Acesso Permitido\n");
        } else {
            printf("Senha Invalida\n");
        }
    } while(senha != senhaValida);

    return (0);
}