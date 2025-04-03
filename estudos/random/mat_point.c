#include <stdio.h>

#define MAX 100

int f(int M[MAX][MAX], int n) {
    n = 10;
    M[2][3] = 4;
    return 0;
}

int main() {

    int A[MAX][MAX], m, a;
    m = 15;
    A[2][3] = 5;
    a = f(A, m);

    for (int i = 0; i < 5; i++) {  
        printf("a[%d]", i);
    }
    return (0);
}

