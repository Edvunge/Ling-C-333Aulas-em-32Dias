#include <stdio.h>

void square (int x) {
    printf("O quadrado e %d",(x*x));
}


int main(void) {
    int num;

    printf("Entre com um numero: ");
    scanf("%d" ,&num);

    printf("\n\n");
    square(num);
    return (0);
}