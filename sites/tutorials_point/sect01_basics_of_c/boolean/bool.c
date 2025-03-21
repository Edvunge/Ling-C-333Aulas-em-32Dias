#include <stdio.h>
#include <stdbool.h>

int main(){

    bool x;
    x = 10 > 5;

    if(x)
        printf("X is True\n");
    else 
        printf("X is False\n");

    bool y;
    int marks = 40;
    y = marks > 50;

    if(y)
        printf("Result: Pass\n");
    else 
        printf("Result: Fail\n");

    return (0);
}