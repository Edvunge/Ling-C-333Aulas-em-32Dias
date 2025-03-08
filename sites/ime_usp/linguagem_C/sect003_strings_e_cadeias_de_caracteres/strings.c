#include <stdio.h>

int main(void){

    byte *str;
    str = malloc (10 * sizeof (byte));
    str[0] = 65;
    str[1] = 66;
    str[2] = 67;
    str[3] =  0;
    str[4] = 68;

    printf("\n%s",str);
    return (0);
}

