#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void){

    bool loop = true;
    int i = 0;

    while(loop){
        i++;
        printf("i: %d \n", i);

        if (i >= 5)
            loop = false;
    }

    printf("Loop stopped!\n");
    return EXIT_SUCCESS;
}