#include <stdio.h>
#include <stdlib.h>
/*
22. Leia um valor de comprimento em jardas e apresente-o convertido em metros. A fórmula
de conversão é: M = 0, 91 ∗ J, sendo J o comprimento em jardas e M o comprimento
em metros.
*/
int main(void){
    float comprimetosEmJardas, conversorEmMetros;

    printf("\nDigite o valor em comprimentos de jardas");
    scanf("%f",&comprimetosEmJardas);

    conversorEmMetros = (0.91 * comprimetosEmJardas);
    printf("\nO valor convertido e de %.2f",conversorEmMetros);
    return 0;
}