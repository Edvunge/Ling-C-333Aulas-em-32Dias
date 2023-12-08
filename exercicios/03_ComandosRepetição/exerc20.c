#include <stdio.h>
#include <stdlib.h>

/*
20. Ler uma sequencia de numeros inteiros e 
determinar se eles sao pares ou nao. 
Devera ser informado o numero de dados lidos e numero de valores pares. 
O processo termina quando for digitado o numero 1000.
*/

int main(void) {
    int numInt = 0, numrDeValorsPares = 0, numrDeValoresLido = 0;

    do {
        printf("\n\nDigite um valor: \n");
        scanf("%d",&numInt);

        if (numInt % 2 == 0){
            printf("O numero %d eh PAR...\n",numInt);
            
            numrDeValorsPares = numInt;
            numrDeValorsPares++;
        } else {
            printf("O numero %d eh IMPAR...\n",numInt);
        }
        
        numrDeValoresLido = numInt;
        numrDeValoresLido++;       
    } while (numInt != 1000);

    printf("O numero de valors pares lidos eh %d \n",numrDeValorsPares);
    printf("O numero de valors lidos eh %d \n\n",numrDeValoresLido);
    return (0);
}