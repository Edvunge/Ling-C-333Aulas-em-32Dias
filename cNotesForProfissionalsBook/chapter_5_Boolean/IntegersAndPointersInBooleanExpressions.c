#include <stdio.h>

int main(int argc, char* argv[]) {
    if(argc % 4) {
            puts("arguments number is not divisible by 4");
    } else {
            puts("argument number is divisible by 4");
    }


    double* A = malloc(n*sizeof *A);
    if (!A) {
        perror("allocation problems");
        exit(EXIT_FAILURE);
    }
}