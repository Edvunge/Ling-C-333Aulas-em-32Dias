#include <stdio.h>
#include <string.h>

int main(void) {

    char str[14] = {'G','e','e','k','s','f','o','r','G','e','e','k','s','\0'};

    for (int i = 0; i < 14; i++) {
        printf("%c\n",str[i]);
    }
    return (0);
}

