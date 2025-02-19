#include<stdio.h>
#include<stdlib.h>

int main(void) {
    int i, j, n; 
    
    printf("Qual o num de ramo: "); 
    scanf("%d", &n);

    for(i = 1; i <= n; i++) { 
        for(j = 1; j <= i; j++)
        putchar('*');
    putchar('\n');  
    } 
}
