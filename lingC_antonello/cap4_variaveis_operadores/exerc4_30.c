#include <stdio.h>
#include <stdlib.h>

// 4.30) Escreva um programa para ler o raio de um círculo, 
// calcular e escrever a sua área. A = π r²

int main(void) {
    float raioDoCirculo = 0.0f, areaDoCirculo = 0.0f;
    const float PI = 3.141516;

    printf("Digite o valor do raio do circulo: ");
    scanf("%f",&raioDoCirculo);
    
    areaDoCirculo = (PI * (raioDoCirculo * raioDoCirculo));
    
    printf("o valor da area do circulo eh de: %.1f",areaDoCirculo);
    return (0);
}