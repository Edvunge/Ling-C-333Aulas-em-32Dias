#include <stdio.h>
#include <stdlib.h>

int main() {
    int idade; 
    double altura;
    char primeiraLetraDoNome;
    float peso;


    printf("\nInsira a sua idade: ");
    scanf("%d",&idade);

    printf("\nInsira a sua altura: ");
    scanf("%lf",&altura);
    getchar();

    printf("\nInsira o seu peso: ");
    scanf("%f",&peso);

    printf("\nInsira a primeiraLetraDoNome: ");
    scanf(" %c",&primeiraLetraDoNome);

    printf("\nIdade: %d ",idade);
    printf("\nAltura sera: %.1f",altura);
    printf("\nPrimeira letra do nome: %c ",primeiraLetraDoNome);
    printf("\nO peso: %.1f\n",peso);

    return (0);
}