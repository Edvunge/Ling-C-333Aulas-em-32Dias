#include <stdio.h>

/*
🧪 Exercício Prático
Crie um programa chamado calculo.c que:

Declare 3 variáveis: int idade, float altura, char inicial.

Atribua valores a elas.

Use printf para exibir:
“Minha idade é 25, minha altura é 1.75 e meu nome começa com J.”

Se quiser um desafio a mais: adicione uma variável double chamada pi com o valor 3.141592 e 
imprima-a com 6 casas decimais.
*/

int main(void) {
    
    int idade;
    float altura;
    char inicialDoNome;


    printf("Digite a sua idade: \n");
    scanf("%d", &idade);

    printf("Digite a sua altura: \n");
    scanf("%f", &altura);

    printf("Digite a letra inicial do nome: \n");
    scanf(" %c", &inicialDoNome);

    printf("\nMinha idade: %d", idade);
    printf("\nMinha altura: %.2f", altura);
    printf("\nMeu nome comeca com:  %c", inicialDoNome);

    return (0);
}

