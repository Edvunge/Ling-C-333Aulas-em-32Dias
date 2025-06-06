#include <stdio.h>

// function prototype
int sum(int, int);

// function definition
int sum(int x, int y){
    
    int sum;
    sum = x + y;
    return x + y;
}

int main(){
    int x = 10, y = 11;

    // function call
    int result = sum(x, y);
    printf("Sum of %d and %d = %d", x, y, result);

    return (0);
}

