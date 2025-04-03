#include <stdio.h>
#include <stdlib.h>

/*
12. (Cortesia do Prof. Bogdan Tomoyuki Nassu) Suponha que você está programando um
módulo contador de cédulas para caixas eletrônicos. Escreva um programa que informa com
quantas cédulas de Real podemos representar um dado valor. Exemplo de resposta: R$ 218
= 2 cédulas de 100, 1 cédula de 10, 1 cédula de 5, 1 cédula de 2 e 1 cédula de 1. Procure
minimizar o número de cédulas usadas. Desconsidere valores com centavos, e suponha que
a máquina sempre tem disponíveis as cédulas necessárias.

45 eur => 2notas (20eur) + 1nota (5eur)

1 eur
5 eur
10 eur
20 eur
50 eur
100 eur
200 eur
500 eur
*/

void contarCedulas(int valor) {
    int cedulas[] = {100, 50, 20, 10, 5, 2, 1};
    int quantidadeCedulas[7] = {0};  // Inicializa a contagem de cédulas com zeros

    printf("R$ %d = ", valor);

    for (int i = 0; i < 7; i++) {
        quantidadeCedulas[i] = valor / cedulas[i];
        valor %= cedulas[i];

        if (quantidadeCedulas[i] > 0) {
            if (i > 0) {
                printf(", ");
            }
            printf("%d cedula(s) de %d", quantidadeCedulas[i], cedulas[i]);
        }
    }

    printf(".\n");
}

int main() {
    int valor;
    printf("Digite o valor em Reais: ");
    scanf("%d", &valor);

    contarCedulas(valor);

    return 0;
}