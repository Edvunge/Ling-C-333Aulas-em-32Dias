#include <stdio.h>
#include <stdlib.h>

void linha(){
    int i;
    for(i=1; i<=20; i++){
        putchar('*');
    }
    putchar('\n');
}

int main(void){
    int i;
    
    linha();
    puts("Numeros entre 1 e 5");
    linha();

    for (i=1; i<=5; i++){
        printf("%d\n",i);
    }
    linha();
    return 0;
}