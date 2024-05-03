#include <stdio.h>

int main(void) {
    int num;

    printf("Digite um numero: ");
    scanf("%d",&num);

    if (num > 10) 
        printf("\n\nO numero e maior que 10");
    
    if (num == 10) {
        printf("\n\nVoce acertou!\n");
        printf("O numero eh igual a 10.");
    }

    if (num < 10)
        printf("\n\nO numero e menor que 10");

    return (0);
}