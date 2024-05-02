#include <stdio.h>

int main(){
    int x = 9;
    int * px = &x;
    int * px2 = px + 1;

    int y = 1 + (*px);

    printf("A qtd de dados de x eh: %lu\n", sizeof(int*));

    printf("O endereco de x: %p\n",&x);
    printf("O endereco de px: %p\n", px);
    printf("O endereco de &px: %p\n",&px);
    
    printf("O endereco de px2: %p\n", px2);
    return (0);
}