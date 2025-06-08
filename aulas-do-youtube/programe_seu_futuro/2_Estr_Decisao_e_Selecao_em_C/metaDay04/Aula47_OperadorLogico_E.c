#include <stdio.h>
#include <stdlib.h>

/*
            Aula 47: Operador Logico (&) E         
*/


int main(void) {
    int idade;
    char sexo;

    printf("Digite seu sexo f ou m e sua idade: ");
    scanf("%c%d", &sexo, &idade);

    if(sexo == 'm') {
        if(idade == 18)
            printf("Alistamento obrigatorio!\n");
        else 
            printf("Dispensado!\n");    
    } else {
        printf("Dispensado!\n");
    }
    return (0);
}