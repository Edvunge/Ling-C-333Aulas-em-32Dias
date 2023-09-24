#include <stdio.h>
/*
47. Leia um número inteiro de 4 dı́gitos (de 1000 a 9999) 
e imprima 1 dı́gito por linha.
*/
int main() {
    int num;
    
    printf("Digite um número inteiro de 4 dígitos (1000 a 9999): ");
    scanf("%d", &num);
    
    int d1 = num / 1000;
    int d2 = (num / 100) % 10;
    int d3 = (num / 10) % 10;
    int d4 = num % 10;
    
    printf("%d\n", d1);
    printf("%d\n", d2);
    printf("%d\n", d3);
    printf("%d\n", d4);
    
    return 0;
}
