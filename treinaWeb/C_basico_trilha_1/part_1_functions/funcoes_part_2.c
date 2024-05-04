//
// chamada por referencia
//
#include <stdio.h>

void valores(int *a, int *b);

int main(void){
    int x, y;

    x = 10;
    y = 15;

    valores(&x,&y);

    printf("Agora eles valem: x = %i e y = %i",x ,y);
    return (0);
}

void valores(int *a, int *b) {
    int temp = *a;
    
    *a = *b;
    
    *b = temp;
}