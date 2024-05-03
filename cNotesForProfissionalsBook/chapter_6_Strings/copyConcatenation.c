#include <stdio.h>
#include <stdlib.h>

int main(void) {

    char mystring[10];

    strcpy(mystring, "foo");
    printf("%s\n", mystring);

    strcat(mystring, "bar");
    printf("%s\n", mystring);

    strcpy(mystring, "bar");
    printf("%s\n", mystring);

    return (0);
}