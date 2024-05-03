#include <stdio.h>
#include <stdlib.h>

/*
20. Ler uma sequência de números inteiros e determinar se eles são pares ou não. Deverá
ser informado o número de dados lidos e número de valores pares. O processo termina
quando for digitado o número 1000.
*/

int main(void){
    
    int num, impar = 0, par = 0; 
    int total_numeros = 0;

    do {
        printf("Digite um numero: \n");
        scanf("%d", &num);

        if (num != 1000) {
            total_numeros++; 

            if (num % 2 == 0) {
                par++;
            } else {
                impar++;
            }
        }
    } while (num != 1000);

    printf("\nO valor total de numeros lidos (excluindo 1000): %d", total_numeros);
    printf("\nO valor total de impares: %d", impar);
    printf("\nO valor total de pares: %d", par);

    return(0);
}