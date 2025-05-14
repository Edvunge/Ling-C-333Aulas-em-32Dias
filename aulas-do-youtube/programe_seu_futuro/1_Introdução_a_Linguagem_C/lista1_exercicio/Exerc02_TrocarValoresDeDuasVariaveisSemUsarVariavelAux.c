#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int a, b;

    printf("Digite dois valores: ");
    scanf("%d%d", &a, &b);

    printf("a: %d\tb: %d\n", a, b );

    a = a + b;
    b = a - b;
    a = a - b;
    
    printf("Valores lidos: a: %d\tb: %d\n",a, b);
    return (0);
}