#include <stdio.h>

int main(void){
    
    char nomes[][7] = {"joão", "josé", "Maria", "Alguém", "Novo"};
    printf("%s\n", nomes[1]);
    
    int qtd = sizeof(nomes) / sizeof(nomes[0]);
    printf("QTD: %d\n", qtd);

    return (0);
}