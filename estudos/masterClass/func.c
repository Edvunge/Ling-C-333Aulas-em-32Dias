
#include <stdio.h>
#include <stdlib.h>


// prototype
double soma(double a, double b);


int main() {

    // int %d , %i
    // double %lf 
    // float %lf
    // char %c
    // string %s
    printf("a soma de a + b =  %.2lf ", soma(3.2, 4.2));

    return (0);
}


// função
double soma(double a, double b) {
    return a + b;
}

