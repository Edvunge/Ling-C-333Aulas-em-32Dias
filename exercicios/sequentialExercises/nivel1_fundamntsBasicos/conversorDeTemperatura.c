#include <stdio.h>
/* 
3. Escreva um programa que converta temperaturas entre Celsius 
e Fahrenheit
*/
int celsiusFahrenheit(int c);
int fahrenheitCelsius(int f);

int main(void) {
    char conversor;

    printf("ESCOLHA UMA OPCAO:\n");
    printf("PARA CONVERTER DE CELSIUS PARA FAHRENHEIT: (C - c) \n");
    printf("PARA CONVERTER DE FAHRENHEIT PARA CELSIUS: (F - f) \n");
    scanf("%c", &conversor);

    switch (conversor) {
    case 'c':
        printf("\nPARA CONVERTER DE CELSIUS PARA FAHRENHEIT\n");
        
        int feit = celsiusFahrenheit(4);
        printf("Graus Fahrenheit: %d", feit);
        break;
    case 'f':
        printf("\nPARA CONVERTER DE FAHRENHEIT PARA CELSIUS\n");
        
        int celsi = fahrenheitCelsius(6);
        printf("Graus Celsius: %d", celsi);
        break;
    default:
        printf("CARACTER INVALIDO.\n");
        break;
    }
    return (0);
}

int celsiusFahrenheit(int c) {
    int f; 
    printf("Digite o valor de Celsius: \n");
    scanf("%d", &c);

    f = (c * (9/5)) + 32;
    return f;
}

int fahrenheitCelsius(int f) {
    int c;
    printf("Digite o valor de Fahrenheit: \n");
    scanf("%d", &f);

    c =((f - 32) * (5/9));
    return c;
}