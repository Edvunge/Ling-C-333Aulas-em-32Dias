#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int functionHipotenusa(float a, float b){
    float hipotenusa = 0;

    hipotenusa = sqrt( (a*a) + (b*b) );

    return printf("O valor da Hipotenusa e de: %.3f",hipotenusa);
}

int main(void){
    functionHipotenusa(3.4 , 1.2);
    return 0;
}