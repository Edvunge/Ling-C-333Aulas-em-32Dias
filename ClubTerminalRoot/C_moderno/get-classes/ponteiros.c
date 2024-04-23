#include <stdio.h>

int main(void){
    int x = 9;
    int * px = &x;
    int ** ppx = &px;
    printf("O valor de X e: %d\n", **ppx);
    return (0);
}