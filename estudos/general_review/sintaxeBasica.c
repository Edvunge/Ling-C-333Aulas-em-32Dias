#include <stdio.h>

/* Sintaxe Básica  

- Estrutura de um programa em C (#include, main())  
- Tipos de dados primitivos (int, float, char, double)  
- Variáveis e constantes (const, #define)  
- Entrada e saída (printf, scanf)
*/


int main(void) {
    int x_int, y_int;
    float x_float = 1.2f, y_float = 2.1f;
    char x_char = 'a', y_char = 'b';
    double x_double = 2.1, y_double = 3.4;

    printf("Digite o valor de x_int: ");
    scanf("%d", &x_int);

    printf("Digite o valor de y_int: ");
    scanf("%d", &y_int);

    printf("\nValores inseridos:\n");
    printf("x_int: %d\n", x_int);
    printf("y_int: %d\n", y_int);

    // Exemplo de saída para as outras variáveis declaradas
    printf("\nValores pré-definidos:\n");
    printf("x_float: %.2f\n", x_float);
    printf("y_float: %.2f\n", y_float);
    printf("x_char: %c\n", x_char);
    printf("y_char: %c\n", y_char);
    printf("x_double: %.2lf\n", x_double);
    printf("y_double: %.2lf\n", y_double);

    return 0;
}

