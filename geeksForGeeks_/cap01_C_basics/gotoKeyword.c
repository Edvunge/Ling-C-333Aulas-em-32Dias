#include <stdio.h>

void printNUmbers(){
    int n = 1;

    label:
        printf("%d ", n);
        n++;
        if (n <= 10) goto label;
}

int main(void){
    printNUmbers();
    return (0);
}