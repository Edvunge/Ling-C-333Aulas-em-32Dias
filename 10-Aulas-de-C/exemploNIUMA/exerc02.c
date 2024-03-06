#include <stdio.h>
#include <stdlib.h>

int main() {
    int x = 0; 
    int y = 0; 
    int soma = 0;

    printf("\nInsira x: ");
    scanf("%d",&x);

    printf("\nInsira y: ");
    scanf("%d",&y);

    soma = x + y;

    printf("\n%d + %d = %d ",x ,y, soma);
   
    return (0);
}