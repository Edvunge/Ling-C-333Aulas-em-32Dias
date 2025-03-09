#include <stdio.h>
#include <stdlib.h>

/*
23. Crie um programa que informe a quantidade total de calorias de uma refeição a
partir da escolha do usuário que deverá informar o prato, a sobremesa, e bebida
conforme a tabela a seguir.

Prato  ===========================  Sobremesa  =========================  Bebida
Vegetariano 180cal ---------------- Abacaxi 75cal ----------------------- Chá 20cal
Peixe 230cal  --------------------- Sorvete diet 110cal ----------------- Suco de laranja 70cal
Frango 250cal --------------------- Mousse diet 170cal ------------------ Suco de melão 100cal
Carne 350cal  --------------------- Mousse chocolate 200cal ------------- Refrigerante diet 65cal
==================================================================================================
*/

int main(void) {
    char prato, sobremesa, bebida;
    int caloriasPrato = 0, caloriasSobremesa = 0, caloriasBebida = 0;

    // Escolha do prato
    printf("\nDigite uma letra correspondente ao prato do menu: ");
    printf("\n(v) Vegetariano 180cal, (p) Peixe 230cal, (f) Frango 250cal, (c) Carne 350cal\n");
    scanf(" %c", &prato);

    // Escolha da sobremesa
    printf("\nDigite uma letra correspondente à sobremesa: ");
    printf("\n(a) Abacaxi 75cal, (s) Sorvete diet 110cal, (m) Mousse diet 170cal, (h) Mousse Chocolate 200cal\n");
    scanf(" %c", &sobremesa);

    // Escolha da bebida
    printf("\nDigite uma letra correspondente à bebida: ");
    printf("\n(c) Chá 20cal, (s) Suco de laranja 70cal, (m) Suco de melão 100cal, (r) Refrigerante diet 65cal\n");
    scanf(" %c", &bebida);

    // Calorias do prato
    switch (prato) {
        case 'v':
            caloriasPrato = 180;
            break;
        case 'p':
            caloriasPrato = 230;
            break;
        case 'f':
            caloriasPrato = 250;
            break;
        case 'c':
            caloriasPrato = 350;
            break;
        default:
            printf("\nPrato Inválido.\n");
            return 1;
    }

    // Calorias da sobremesa
    switch (sobremesa) {
        case 'a':
            caloriasSobremesa = 75;
            break;
        case 's':
            caloriasSobremesa = 110;
            break;
        case 'm':
            caloriasSobremesa = 170;
            break;
        case 'h':
            caloriasSobremesa = 200;
            break;
        default:
            printf("\nSobremesa Inválida.\n");
            return 1;
    }

    // Calorias da bebida
    switch (bebida) {
        case 'c':
            caloriasBebida = 20;
            break;
        case 's':
            caloriasBebida = 70;
            break;
        case 'm':
            caloriasBebida = 100;
            break;
        case 'r':
            caloriasBebida = 65;
            break;
        default:
            printf("\nBebida Inválida.\n");
            return 1;
    }

    // Calcular e exibir o total de calorias
    int totalCalorias = caloriasPrato + caloriasSobremesa + caloriasBebida;
    printf("\nTotal de calorias da refeição: %d calorias\n", totalCalorias);

    return 0;
}
