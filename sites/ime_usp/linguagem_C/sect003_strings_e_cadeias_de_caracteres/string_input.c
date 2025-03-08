#include <stdio.h>
#include <string.h>

#define MAX 50

int main(void) {
    
    char str[MAX];
    
    printf("Digite uma String: \n");
    fgets(str, MAX, stdin);

    printf("String is: \n");

    puts(str);

    return (0);
}

