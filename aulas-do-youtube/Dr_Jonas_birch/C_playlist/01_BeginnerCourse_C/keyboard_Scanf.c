#include <stdio.h>

int main() {
    char name[32];

    printf("What is your name\n");
    fgets(name, 32, stdin);

    printf(" name: %s ",name);

    return (0);
}