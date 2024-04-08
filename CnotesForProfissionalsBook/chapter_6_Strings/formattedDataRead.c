#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char buffer [50];
    double PI = 3.1415;
    
    sprintf(buffer, "PI = %.7f", PI);
    printf("%s\n",buffer);
    return (0);
}