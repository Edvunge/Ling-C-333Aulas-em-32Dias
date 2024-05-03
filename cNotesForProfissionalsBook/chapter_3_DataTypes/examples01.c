#include <stdio.h>

int main(void) {
    char *names[20];

    char (*place)[10];

    int fn(long, short);

    int *fn(void);

    int *fn(void);

    int arr[5][8];

    int **ptr;

    printf(names, "\n");

    printf(place,"\n");

    printf(fn,"\n");

    printf(*fn,"\n");
    
    printf(**fn,"\n");
    
    printf(arr,"\n");
    
    printf(**ptr,"\n");
    
    return (0);
}