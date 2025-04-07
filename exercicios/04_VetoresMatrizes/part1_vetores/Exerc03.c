#include <stdio.h>
#include <stdlib.h>

// Ler um conjunto de numeros reais, 
// armazenando-o em vetor e calcular o quadrado das
// componentes deste vetor, armazenando o resultado em outro vetor. 
// Os conjuntos tem 10 elementos cada. Imprimir todos os conjuntos.

int main(void) {
    const int LENT = 10;
    double vet[LENT];
    double tev[LENT];

    for (int y = 0; y < LENT; y++) {
        printf("Number for Position[%d]: ",y);
        scanf("%lf", &vet[y]);
    }

    for (int x = 0; x < LENT; x++) {
        tev[x] = vet[x]*vet[x];
    }

    for (int i = 0; i < LENT; i++) {
        printf(" %.2lf \n", tev[i]);
    }
    return (0);
}

