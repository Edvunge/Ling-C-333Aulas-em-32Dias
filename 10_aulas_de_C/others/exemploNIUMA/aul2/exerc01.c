#include <stdio.h>
#include <stdlib.h>

/*

 x e y

 x = 2
 y = 3


y = 2
x = 3
*/


int main(void) {
    int x = 2, y = 3, auxiliar = 10;
    
    printf("x: %d\n",x);
    printf("y: %d\n",y);

    auxiliar = x;
    x = y;
    y = auxiliar;
    
    printf("\nDEPOIS DA TROCA FICA ASSIM:\n");
    
    printf("\nx: %d\n",x);
    printf("y: %d\n",y);
    return (0);
}