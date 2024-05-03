#include <stdio.h>

int main(void) {
    int a[3][4] = {
        {0, 1, 2, 3} ,
        {4, 5, 6, 7} ,
        {8, 9, 10, 11}
    };

    for (int i = 0; i < a.length; i++){
        for (int j = 0; j < a.length; j++) { 
            printf(" %d ",a[i][j]);
        }
    }
    return (0);
}