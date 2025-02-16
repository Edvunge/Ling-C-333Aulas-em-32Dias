#include <stdio.h>

/*
Controle de Fluxo  
- Condicionais (if, else, switch-case)  
- Laços (for, while, do-while) 
*/

int main(void) {
    int idade;

    printf("Digite a sua idade: ");
    scanf("%d",&idade);

    if(idade >= 18) {
        printf("ESTA APTO PARA DIRIGIR: \n");
    } else {
        printf("NÃO ESTA APTO PARA DIRIGIR: \n");
    }

    return (0);
}