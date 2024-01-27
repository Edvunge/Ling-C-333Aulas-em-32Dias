#include <stdio.h>
#include <stdlib.h>

// 4.28) Faça um programa para resolver a equação: 
// x=(32−y)/(2a+b). Sendo a=10, b=2 e y=5.

int main(void) {
    int var_a = 10, var_b = 2 , var_y = 5;
    int var_x = 0;

    //x=(32−y)/(2a+b)
    var_x = (32 - var_y)/((2*var_a) + var_b);

    printf("\nO valor de X: %d",var_x);
    return (0);
}