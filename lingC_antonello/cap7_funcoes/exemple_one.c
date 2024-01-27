#include <stdio.h>
#include <stdlib.h>

void linha(int num, char carac){
    for(int i = 0; i < num; i++) {
        printf("%c",carac);
    }
    printf("\n");
}

void linha10(){
    linha(10, '*');
}

int main(void) {
    linha10();
    return (0);
}