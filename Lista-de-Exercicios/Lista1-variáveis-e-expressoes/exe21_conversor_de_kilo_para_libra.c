#include <stdio.h>
#include <stdlib.h>
/*
21. Leia um valor de massa em libras e apresente-o convertido em quilogramas. A fórmula
de conversão é: K = L ∗ 0, 45, sendo K a massa em quilogramas e L a massa em libras.
*/
int main(void){
    float massaEmLibras, conversorQuilogramas;

    printf("\nDigite o valor em massa por libras");
    scanf("%f",&massaEmLibras);

    conversorQuilogramas = (massaEmLibras * 0.45);
    printf("\nO valor convertido e de %.2f",conversorQuilogramas);
    return 0;
}