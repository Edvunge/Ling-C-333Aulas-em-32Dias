#include <stdio.h>
#include <stdlib.h>

/*
22. Construa um programa que leia o percurso em quilómetros, o tipo do carro e
informe o consumo estimado de combustível, sabendo-se que um carro tipo C
faz 12 km com um litro de gasolina, um tipo B faz 9 km e o tipo C, 8 km por litro.

*/

int main() {
    float percurso, consumo;
    char tipoCarro;

    // Solicita ao usuário que insira o percurso em quilômetros
    printf("Digite o percurso em quilometros: ");
    scanf("%f", &percurso);

    // Solicita ao usuário que insira o tipo de carro (A, B ou C)
    printf("Digite o tipo de carro (A, B ou C): ");
    scanf(" %c", &tipoCarro);

    // Calcula o consumo estimado com base no tipo de carro
    switch (tipoCarro) {
        case 'A':
        case 'a':
            consumo = percurso / 12.0;  // Carro tipo A faz 12 km por litro
            break;
        case 'B':
        case 'b':
            consumo = percurso / 9.0;  // Carro tipo B faz 9 km por litro
            break;
        case 'C':
        case 'c':
            consumo = percurso / 8.0;  // Carro tipo C faz 8 km por litro
            break;
        default:
            printf("Tipo de carro invalido.\n");
            return 1;  // Saída com erro
    }

    // Exibe o consumo estimado de combustível
    printf("Consumo estimado de combustivel: %.2f litros\n", consumo);

    return 0;
}
