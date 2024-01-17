#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int idade[10];
    int i = 0, maxIdade = 0, minIdade = 0;

    printf("Informe 10 idades: \n");
    for(i=0; i < 10; i++) {
        scanf("%d", &idade[i]);
    }

    // imprime idades armazenadas
    for(i = 0; i < 10; i++){
        printf("%d\n",idade[i]);
    }

    // maior idade
    for(i; i < 10; i++){
        if(maxIdade < idade[i]) {
            maxIdade = idade[i];           
        }
        printf("Idade: %d Idade Max: %d\n",idade[i],maxIdade);
    }

    // exibe a idade maxima
    printf("Idade maxima: %d\n",maxIdade);

    //*****************************************
    // Exibir a idade minima

    for(i; i < 10; i++){
        if(minIdade > idade[i]) {
            minIdade = idade[i];           
        }
        printf("Idade: %d Idade Min: %d\n",idade[i],minIdade);
    }

    // Exiber a idade minima
    printf("Idade minima: %d\n",minIdade);

    return (0);
}