#include <stdio.h>
#include <stdlib.h>

/*
4. Faça um programa em C que permita entrar com o nome, a idade e o sexo de 20
pessoas. O programa deve imprimir o nome da pessoa se ela for do sexo masculino
e tiver mais de 21 anos.
*/

int main(void){
    char sexo, nome[15];
    int idade, i;

    for(i = 0; i <= 3; i++) {
        printf("\nDigite o seu nome: ");
        fgets(nome, 15, stdin);

        printf("\nDigite a sua idade: ");
        scanf("%d", &idade);

        printf("\nDigite o sexo (m/f): ");  
        scanf(" %c", &sexo);  

        if (sexo == 'm' && idade > 21) {
            printf("\nO nome da pessoa: %s", nome);
        }
        
        // Limpar o buffer do teclado
        while (getchar() != '\n');
    }
    
    return (0);
}