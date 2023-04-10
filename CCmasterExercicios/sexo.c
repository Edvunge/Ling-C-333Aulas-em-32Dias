#include <stdio.h>
#include <stdlib.h>
/*
Fácil 3 - Faça um programa que verifique (usando if e else) se uma letra digitada é “F” ou “M”. 
Conforme a letra escrever: F – Feminino, M- Masculino, Sexo inválido. 
*/
int main() {
    char sexo;

    printf("insira uma letra (F/M)\n");
    scanf("%s",&sexo);

    if (sexo == 'F') {
        printf("F - Feminino.\n");
    } else if (sexo == 'M') {
        printf("M - Masculino.\n");
    } else {
        printf("Sexo invalido.\n");
    }
    return 0;
}