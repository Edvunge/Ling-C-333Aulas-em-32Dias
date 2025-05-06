#include <stdio.h>
#include <math.h>

int main(void) {

    float fX, fY, fZ;
    printf("\nEntre com os valores dos 3 lados: ");
    scanf("%f%f%f", &fX, &fY, &fZ);

    if( (fabs(fY-fZ) < fX) && (fX < (fY+fZ)) ) {
        if ( (fX == fY) && (fX == fZ) ) {
            printf("\nTriangulo Equilatero!");
        } else {
            if ( (fX != fY) && (fX != fZ) ) {
                printf("\nTriangulo Escaleno!");
            } else {
                printf("\nTriangulo Isosceles!");
            }
        }
    } else {
        printf("\nAs medidas nao formam um triangulo!");
    }
}
