#include <stdlib.h>
#include <stdio.h>

/*
2. Solicitar um numero entre 1 e 4.
se a pessoa digitar um numero diferente,
mostrar a mensagens "Entrada Invalida"
e solicitar o numero novamente.
se digitar correto mostrar o numero digitado.
*/

int main(void){
    int num; 

    
    do {
        printf("Informe o numero: ");
        scanf("%d", &num);

        if(num < 1 || num > 4) {
            printf("Entrada Invalida\n");
        }
    } while (num < 1 || num > 4);
    
    printf("numero digitado: %d",num);

    return (0);
}