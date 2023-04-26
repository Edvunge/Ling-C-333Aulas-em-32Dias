#include <stdio.h>
#include <stdlib.h>
/*

*/
int functionGrausCelsius(float GrausCelsius){
    float GrausFahrenheit = 0;
    
    GrausFahrenheit = (GrausCelsius * (9.0/5.0) + 32.0 );
    return printf("O valor dos graus em fahrenheit e de: %.2f ",GrausFahrenheit);
}

int main(void){
    
    functionGrausCelsius(2.1);

    return 0;
}