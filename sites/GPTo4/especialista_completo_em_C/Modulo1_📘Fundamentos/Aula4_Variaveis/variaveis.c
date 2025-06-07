#include <stdio.h>

int main(void) {

    printf("TIPOS DE VARIAVEIS\n");

    int idade = 30; // 4 bytes - numeros inteiros
    float peso = 78.5; // 4 bytes - numeros com ponto decimal
    double pi = 3.14159; // 8 bytes - mais precisão que float 
    char letra = 'A'; // 1 byte - caractere unico
    
    printf("\nidade: %d\n", idade);
    printf("peso: %f\n", peso);
    printf("pi: %f\n", pi);
    printf("letra: %c\n", letra);

    return (0);
}

