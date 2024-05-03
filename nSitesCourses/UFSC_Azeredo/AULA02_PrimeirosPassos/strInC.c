#include <stdio.h>

int main(void) {
    char str[10] = "Joao";

    printf("\n\nString: %s", str);
    printf("\nSegunda letra: %c", str[1]);
    str[1] = 'U';

    printf("\nAgora a sua segunda letra eh: %c", str[1]);
    printf("\n\nString resultante: %s", str);
    return (0);
}