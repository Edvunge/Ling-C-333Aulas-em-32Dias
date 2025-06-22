#include <stdio.h>

#define TRUE  1
#define FALSE 0

int main() {
    int cont; // contador dos elementos da sequencia
    int n;  // numero de elementos da sequencia
    int soma;
    int num; // cada elemento da sequencia
    int ant; // elemento anterior ao num
    int crescente;

    printf("Entre com n>0: ");
    scanf("%d", &n);

    printf("Entre com um num. inteiro da seq.: ");
    scanf("%d", &num);

    crescente = TRUE;
    soma = num;

    cont = 2;
    while(cont <= n) {

        ant = num;

        printf("Entre com um num. inteiro da seq.: ");
        scanf("%d", &num);

        if(ant >= num)
            crescente = FALSE;

        soma = soma + num;

        cont = cont + 1;
    }

    printf("soma = %d\n", soma);

    if(crescente == TRUE)
        printf("Sequencia Estritamente Crescente\n");
    else 
        printf("Sequencia Nao Estritamente Crescente\n");

    return (0);
}
