#include <stdio.h>
#include <stdlib.h>

int main(void) {
    
    int num = 123;
    char str[10];

    itoa(num,str, 10);

    printf("%s\n", str);    
    return (0);
}