#include <stdio.h>
#include <string.h>


int main(void) {
    
    char *a, *b;

    a = "abacate";
    b = "banana";

    if (a < b)
        printf("%s é menor que %s\n",a, b);
    else 
        printf("%s é menor que %s\n", b, a);

    return (0);
}

