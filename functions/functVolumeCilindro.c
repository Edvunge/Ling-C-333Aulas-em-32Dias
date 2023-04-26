#include <stdio.h>
#include <stdlib.h>

int functionVolumCilindro(float altura, float raio){
    const float PI = 3.141592;
    float volumeCilindro = 0;
    volumeCilindro = (PI * raio * raio);

    return printf("o valor do volume do cilindro e de: %.2f",volumeCilindro);
}

int main(void){
    
    functionVolumCilindro( 1.23  , 2.1);
    return 0;
}