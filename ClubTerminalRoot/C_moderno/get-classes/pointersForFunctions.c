#include <stdio.h>

int dobro(int x) {
    return x * 2;
}

void valor (int * z){
    *z = *z + 1;
}

int main(){
    int y = 9;
    int (*pdobro) (int) = &dobro;

    printf("y eh %d\n", y);
    valor(&y);
    printf("y eh %d\n", y);
    printf("O dobro de 9 eh %d\n", pdobro(9));

    return (0);
}