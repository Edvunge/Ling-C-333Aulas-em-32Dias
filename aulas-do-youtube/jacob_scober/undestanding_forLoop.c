#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

const int ARRAYSIZE  = 4;

int main(int argc, char **argv) {

    /*int myvalues[ARRAYSIZE] = {1,2,3,4};
    int i = 0;
    while (i < ARRAYSIZE) {
        printf("%d: %d\n", i ,myvalues[i]);
        i++;
    }*/
    for (int a=0, b=1, c; b < 100; c=a, a=b, b=b+c){
        printf("%d\n", b);
    }
    return (0);
} 