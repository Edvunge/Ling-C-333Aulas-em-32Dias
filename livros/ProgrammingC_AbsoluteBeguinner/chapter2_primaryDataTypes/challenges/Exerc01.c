#include <stdio.h>

/*
1. Given a = 5, b = 1, x = 10, and y = 5, create a program that
− −outputs the result of the formula f = (a b)(x y) using a
single printf() function.
*/
int main(void) {

    int formula = 0,
    a = 5, 
    b = 1, 
    x = 10, 
    y = 5;

    formula = ((a * b) * (x * y));
    printf("%d = (%d * %d) * (%d * %d) ",formula ,a ,b ,x ,y);

    return (0);
}