#include <stdio.h>

int main(void) {
    int contador, grau, total, media;

    total = 0;
    contador = 1;

    while (contador <= 10){
        printf("Entre com o grau: ");
        scanf("%d", &grau);

        total = total + grau;
        contador = contador + 1;
    }
    
    media = total/10;
    printf("A media da turma e %d/n",media);
    return (0);   
}