#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int a, b, auxiliar;

    printf("Digite dois valores: ");
    scanf("%d%d", &a, &b);

    printf("Valores lidos: a: %d\tb: %d\n", a, b );

    auxiliar = a;
    a = b;
    b = auxiliar;
    
    printf("Valores lidos: a: %d\tb: %d\n",a, b);
    return (0);
}