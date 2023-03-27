#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
	Aula 106:  como criar uma matriz(arrays bidimensionais)?
*/

int main() {

    int vetor[10];
    int mat1[3][3] = {1,2,3,4,5,6,7,8,9};
    /*
    			c0  c1  c2
    linha 0     1   2    3
    linha 1     4   5    6
    linha 2     7   8    9
	*/

    int mat2[][3] = {1,2,3,4,5,6,7};
    int mat3[3][3] = {0};
    
    float mat4[4][5];
    char mat5[10][10];

    return 0;
}
