#include <stdio.h>

int main(void){
    char string[100];
    
    printf("digite uma string: ");
    fgets(string, 100, stdin);

    printf("\n\nVoce digitou %s",string);
    return (0);
}