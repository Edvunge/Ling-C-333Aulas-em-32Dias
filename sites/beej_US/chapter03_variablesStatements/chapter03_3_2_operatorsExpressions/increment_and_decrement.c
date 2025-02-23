#include <stdio.h>

int main(void){
    int i = 10, 
    j = 5 + i++;

    printf("%d, %d\n", i, j);

    int a = 12,
    b = 6 + ++i; 
    printf("%d, %d\n", a, b);   
    return (0);
}