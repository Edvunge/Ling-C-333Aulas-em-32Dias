#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");

    printf("Olá, aqui é um exemplo de acentuação\n")
    return (0);
}