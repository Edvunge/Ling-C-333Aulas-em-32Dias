#include <stdio.h>
#include <stdlib.h>
/* 8) Escreva um programa em C que funcione como uma calculadora. 
 O programa deve apresentar um menu ao usuário da seguinte forma:
1 – Somar
2 – Subtrair
3 – Multiplicar
4 – Dividir
0 – Sair
Uma estrutura do tipo switch deve ser utilizada 
    para realizar cada operação em um case. 
Após a escolha da operação, dois valores devem ser pedidos ao 
usuário para realizar a operação escolhida.
Se a operação escolhida for a 4 o dividendo não pode ser zero, 
um novo valor deve ser solicitado. 
O programa deve funcionar até que o 
usuário escolha a opção 0 (opção de saída).*/ 

int main(void) {
    int menu, valor1, valor2;
    double resultado;

    do {
        printf("Switch operation do you want:\n");
        printf("Press 1 => Add (+)\nPress 2 => Subtract (-)\nPress 3 => Multiply(*)\nPress 4 => Divide (/)\nPress 0 => Exit (->)\n");

        scanf("%d", &menu);

        switch (menu) {
            case 1:
                // Somar
                printf("Enter the first value: ");
                scanf("%d", &valor1);

                printf("Enter the second value: ");
                scanf("%d", &valor2);
                resultado = valor1 + valor2;
                printf("Result: %d + %d = %.2f\n", valor1, valor2, resultado);
                break;
            case 2:
                // Subtrair
                printf("Enter the first value: ");
                scanf("%d", &valor1);

                printf("Enter the second value: ");
                scanf("%d", &valor2);
                resultado = valor1 - valor2;
                printf("Result: %d - %d = %.2f\n", valor1, valor2, resultado);
                break;
            case 3:
                // Multiplicar
                printf("Enter the first value: ");
                scanf("%d", &valor1);

                printf("Enter the second value: ");
                scanf("%d", &valor2);
                resultado = valor1 * valor2;
                printf("Result: %d * %d = %.2f\n", valor1, valor2, resultado);
                break;
            case 4:
                // Dividir
                printf("Enter the first value: ");
                scanf("%d", &valor1);

                do {
                    printf("Enter the second value (not zero): ");
                    scanf("%d", &valor2);
                } while (valor2 == 0);

                resultado = (double)valor1 / valor2;
                printf("Result: %d / %d = %.2f\n", valor1, valor2, resultado);
                break;
            case 0:
                // Sair
                exit(0);
                break;
            default:
                printf("Invalid Option\n");
                break;
        }
    } while (menu != 0);

    return 0;
}