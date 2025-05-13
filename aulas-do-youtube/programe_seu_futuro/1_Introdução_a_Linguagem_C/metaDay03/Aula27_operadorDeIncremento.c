#include <stdio.h>
#include <stdlib.h>

/*
            Aula 27
        operador de incremento ++
*/


int main(void) {

    int resultado, contador = 10;

    // sinonimos
    // contador++;
    // contador += 1;
    // contador = contador + 1;

    resultado = contador++;
    
    printf("Valor: %d\n", resultado );
    

    return (0);
}