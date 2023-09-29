#include <stdio.h>
#include <stdlib.h>

/* - FOR
    Utilizada inicialmente quando sabe-se o numero de vezes que, 
    o trecho do algoritmo irá ser repetido
*/

int main(void){
    int cont1, cont2;

    for(cont1 = 1; cont1 <= 10; cont1++) {
        for(cont2 = 0; cont2 <= 10; cont2++) {
            printf("%d x %d = %d\n",cont1 ,cont2 ,cont1*cont2);            
        }
        printf("\n");
    }
    return (0);
}