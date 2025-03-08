#include <stdio.h>
#include <string.h>


unsigned int strlen(char *s) {
    int k;
    for (k = 0; s[k] != '\0'; ++k) ;
    return k;
}

int main(void) {
    
    char nome[15] = "edvaldo";

    srtlen(nome);

    return (0);
}
