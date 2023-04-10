#include <stdio.h>
#include <stdlib.h>
/*
Fácil 4- Faça um programa que verifique (usando if e else) se uma letra digitada é vogal ou consoante. 
*/
int main () {
    char letra;

    printf("Digite uma letra:?\n");
    scanf("%s",&letra);

    if(  (letra == 'a') || (letra == 'e') || (letra == 'i') || (letra == 'o') || (letra == 'u') ) {
        printf("VOGAL.\n");
    } else if( (letra == 'b') || (letra == 'c') || (letra == 'd') || (letra == 'f') || (letra == 'g') ) {
        printf("CONSOANTE.\n");
    } else if( (letra == 'h') || (letra == 'j') || (letra == 'k') || (letra == 'l') || (letra == 'm') ) {
        printf("CONSOANTE.\n");
    } else if( (letra == 'p') || (letra == 'q') || (letra == 'r') || (letra == 's') || (letra == 't') ) {
        printf("CONSOANTE.\n");
    } else if( (letra == 'v') || (letra == 'x') || (letra == 'y') || (letra == 'w') || (letra == 'z') ) {
        printf("CONSOANTE.\n");
    } 
    return 0;
}